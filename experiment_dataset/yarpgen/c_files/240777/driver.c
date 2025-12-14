#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 3851563018U;
unsigned long long int var_11 = 13935663703532625752ULL;
unsigned int var_13 = 3738867516U;
int zero = 0;
unsigned char var_14 = (unsigned char)68;
signed char var_15 = (signed char)-25;
void init() {
}

void checksum() {
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
