#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55315;
unsigned long long int var_1 = 15365562162607550674ULL;
long long int var_4 = -5262550236338516067LL;
int zero = 0;
unsigned short var_13 = (unsigned short)42150;
long long int var_14 = -3302506482253793813LL;
unsigned long long int var_15 = 9384022818336302197ULL;
void init() {
}

void checksum() {
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
