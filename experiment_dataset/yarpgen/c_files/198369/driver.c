#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)6322;
unsigned int var_12 = 2803173751U;
unsigned char var_13 = (unsigned char)206;
int zero = 0;
unsigned short var_17 = (unsigned short)53673;
long long int var_18 = -5723699335401599691LL;
unsigned char var_19 = (unsigned char)76;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
