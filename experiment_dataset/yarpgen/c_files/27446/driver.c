#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3948656971U;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)99;
unsigned short var_4 = (unsigned short)33378;
unsigned short var_6 = (unsigned short)42055;
unsigned long long int var_9 = 16154740522363683017ULL;
unsigned char var_11 = (unsigned char)159;
long long int var_13 = 5920982457462618539LL;
long long int var_14 = -2936976975289767926LL;
unsigned long long int var_15 = 10815249500035111242ULL;
signed char var_17 = (signed char)-104;
int zero = 0;
unsigned long long int var_18 = 14164034016991050704ULL;
short var_19 = (short)-9649;
short var_20 = (short)10477;
unsigned long long int var_21 = 9728494342483261385ULL;
signed char var_22 = (signed char)10;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
