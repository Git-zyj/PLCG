#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)198;
int var_2 = 1581683512;
unsigned int var_5 = 2678547842U;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 633774473162977935ULL;
unsigned short var_11 = (unsigned short)62953;
int var_14 = 1244002208;
int zero = 0;
int var_15 = 565365709;
signed char var_16 = (signed char)-55;
signed char var_17 = (signed char)-30;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
