#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-68;
signed char var_5 = (signed char)115;
unsigned long long int var_9 = 9420299818797626759ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)12;
unsigned long long int var_18 = 9386151845437203743ULL;
int var_19 = 1916674660;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
