#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)66;
signed char var_3 = (signed char)-80;
signed char var_4 = (signed char)-53;
int zero = 0;
unsigned short var_15 = (unsigned short)4598;
unsigned long long int var_16 = 16262316373148203193ULL;
unsigned long long int var_17 = 18003635616090455301ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
