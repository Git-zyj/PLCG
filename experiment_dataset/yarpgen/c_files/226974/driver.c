#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)220;
_Bool var_1 = (_Bool)1;
unsigned int var_4 = 3926733200U;
unsigned long long int var_5 = 1960773968960679326ULL;
long long int var_7 = -271368064814373121LL;
unsigned long long int var_8 = 7995030348816062838ULL;
long long int var_9 = 6531248015221473746LL;
int zero = 0;
int var_10 = 759295649;
unsigned long long int var_11 = 4329640496337596545ULL;
unsigned char var_12 = (unsigned char)255;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
