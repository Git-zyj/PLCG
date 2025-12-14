#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)50386;
unsigned char var_9 = (unsigned char)133;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 2889135746870408795ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 2981974136U;
int var_19 = 1192258669;
unsigned short var_20 = (unsigned short)6641;
unsigned int var_21 = 1302844571U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
