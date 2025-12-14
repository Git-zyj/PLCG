#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)79;
int var_6 = -70666212;
unsigned short var_7 = (unsigned short)48285;
int zero = 0;
unsigned char var_16 = (unsigned char)146;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)52005;
unsigned long long int var_19 = 3195943783661570964ULL;
long long int var_20 = -5736469643295744490LL;
unsigned int var_21 = 995790337U;
unsigned int var_22 = 3445175991U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
