#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 98686741239104341ULL;
unsigned short var_4 = (unsigned short)22911;
unsigned short var_5 = (unsigned short)30771;
unsigned long long int var_9 = 1154000112714837066ULL;
unsigned long long int var_10 = 7488080058001147978ULL;
int zero = 0;
unsigned long long int var_13 = 6559075738824168460ULL;
int var_14 = -1507696843;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
