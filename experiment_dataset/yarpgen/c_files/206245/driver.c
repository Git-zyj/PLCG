#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2443805714993519329LL;
unsigned short var_2 = (unsigned short)25176;
unsigned int var_4 = 309319012U;
unsigned long long int var_6 = 8082412616867059387ULL;
unsigned long long int var_8 = 9606065996289869485ULL;
int var_10 = 416123334;
unsigned char var_12 = (unsigned char)188;
unsigned char var_14 = (unsigned char)196;
int zero = 0;
short var_19 = (short)-27608;
unsigned char var_20 = (unsigned char)245;
unsigned char var_21 = (unsigned char)104;
void init() {
}

void checksum() {
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
