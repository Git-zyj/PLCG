#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3319939260448941923ULL;
signed char var_4 = (signed char)34;
unsigned int var_6 = 797391643U;
int var_8 = -91709601;
signed char var_9 = (signed char)50;
unsigned long long int var_12 = 636490654298688356ULL;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)47125;
unsigned long long int var_20 = 559784894357632771ULL;
int var_21 = -2021435971;
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
