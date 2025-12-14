#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)245;
signed char var_7 = (signed char)-89;
unsigned long long int var_8 = 7812366484904234694ULL;
unsigned char var_9 = (unsigned char)131;
unsigned int var_10 = 2409994739U;
unsigned long long int var_14 = 10872193323419676819ULL;
long long int var_15 = -3551382169591200655LL;
long long int var_16 = 2955407483326947532LL;
int zero = 0;
long long int var_18 = 1084545048844795254LL;
unsigned char var_19 = (unsigned char)232;
unsigned short var_20 = (unsigned short)34209;
int var_21 = -1580549820;
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
