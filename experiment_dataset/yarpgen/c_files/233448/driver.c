#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22244;
unsigned long long int var_3 = 1632732975207129155ULL;
int var_5 = 1834100485;
long long int var_7 = 5259978671131040631LL;
int zero = 0;
unsigned short var_10 = (unsigned short)17043;
long long int var_11 = -1171375766393093124LL;
unsigned int var_12 = 3632703817U;
unsigned int var_13 = 921009212U;
int var_14 = -1974274663;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
