#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -9067841047810117470LL;
unsigned short var_9 = (unsigned short)51397;
unsigned short var_15 = (unsigned short)12464;
int zero = 0;
signed char var_19 = (signed char)-97;
int var_20 = -215641969;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
