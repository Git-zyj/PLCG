#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)28;
unsigned int var_4 = 3595787884U;
unsigned long long int var_9 = 9436466405943799662ULL;
int zero = 0;
signed char var_11 = (signed char)-33;
unsigned long long int var_12 = 16601648954324903662ULL;
unsigned long long int var_13 = 5589308657247829118ULL;
unsigned short var_14 = (unsigned short)36514;
unsigned int var_15 = 4215071760U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
