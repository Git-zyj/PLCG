#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)123;
unsigned int var_2 = 2967148455U;
unsigned short var_4 = (unsigned short)54912;
unsigned short var_13 = (unsigned short)25612;
int zero = 0;
unsigned long long int var_14 = 6638838503744307616ULL;
unsigned int var_15 = 2245586154U;
unsigned long long int var_16 = 11742586103030740229ULL;
unsigned long long int var_17 = 7605487576741142166ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
