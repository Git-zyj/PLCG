#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1114736849463055585LL;
unsigned long long int var_2 = 3153928611813659754ULL;
unsigned short var_5 = (unsigned short)1223;
unsigned short var_7 = (unsigned short)54746;
signed char var_9 = (signed char)127;
_Bool var_12 = (_Bool)1;
long long int var_14 = -1632464743664157430LL;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 1079390720U;
int zero = 0;
long long int var_17 = 1071984535482700805LL;
unsigned int var_18 = 630908056U;
unsigned char var_19 = (unsigned char)65;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
