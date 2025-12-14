#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)31349;
unsigned char var_3 = (unsigned char)145;
long long int var_6 = 5747599569295774683LL;
short var_7 = (short)-26688;
short var_9 = (short)544;
int var_14 = -501991024;
unsigned int var_16 = 3312171797U;
unsigned short var_19 = (unsigned short)44336;
int zero = 0;
unsigned int var_20 = 2897522016U;
unsigned int var_21 = 2854396186U;
signed char var_22 = (signed char)-52;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
