#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51273;
unsigned long long int var_2 = 16968535307487287047ULL;
long long int var_4 = 221721766180009688LL;
long long int var_5 = 5714544459381192949LL;
int var_9 = -330406042;
int zero = 0;
unsigned short var_10 = (unsigned short)27652;
int var_11 = 386568070;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
