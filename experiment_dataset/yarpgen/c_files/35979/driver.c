#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -4084654720434949546LL;
unsigned short var_7 = (unsigned short)46422;
unsigned char var_11 = (unsigned char)175;
unsigned short var_18 = (unsigned short)55556;
int zero = 0;
long long int var_20 = 6530177178769575789LL;
int var_21 = -1449367087;
unsigned short var_22 = (unsigned short)38837;
unsigned long long int var_23 = 1716697559035526573ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
