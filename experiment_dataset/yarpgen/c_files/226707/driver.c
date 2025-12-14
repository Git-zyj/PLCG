#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)102;
_Bool var_1 = (_Bool)1;
int var_2 = -945752987;
int var_3 = -634088031;
int var_4 = 322129270;
unsigned int var_6 = 3710626393U;
int var_7 = 1873785550;
unsigned char var_9 = (unsigned char)227;
unsigned char var_10 = (unsigned char)108;
unsigned char var_11 = (unsigned char)199;
int zero = 0;
unsigned char var_13 = (unsigned char)96;
int var_14 = -2048515156;
long long int var_15 = -454012550852662792LL;
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
