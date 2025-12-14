#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3132990991U;
unsigned short var_3 = (unsigned short)16667;
unsigned char var_6 = (unsigned char)31;
unsigned long long int var_8 = 7241766555914037914ULL;
signed char var_9 = (signed char)-15;
unsigned short var_12 = (unsigned short)55581;
int var_15 = -1561923936;
signed char var_17 = (signed char)21;
int zero = 0;
int var_19 = -499210285;
unsigned char var_20 = (unsigned char)199;
unsigned short var_21 = (unsigned short)42955;
unsigned int var_22 = 3624825794U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
