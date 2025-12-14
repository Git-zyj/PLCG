#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)43;
int var_1 = 1948993950;
long long int var_2 = 7042213785193572689LL;
int var_3 = 1572443754;
unsigned short var_8 = (unsigned short)61586;
unsigned long long int var_13 = 16428042701072640359ULL;
long long int var_15 = 4021733616471007674LL;
unsigned int var_16 = 4113090305U;
unsigned char var_19 = (unsigned char)225;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)123;
void init() {
}

void checksum() {
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
