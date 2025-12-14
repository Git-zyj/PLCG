#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22735;
unsigned char var_8 = (unsigned char)85;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_18 = 4801532810562670080LL;
unsigned char var_19 = (unsigned char)153;
short var_20 = (short)-20599;
unsigned short var_21 = (unsigned short)36163;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
