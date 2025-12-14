#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)11580;
signed char var_5 = (signed char)-46;
long long int var_8 = -4679770625636338566LL;
unsigned short var_9 = (unsigned short)24705;
unsigned int var_13 = 1131736446U;
unsigned short var_14 = (unsigned short)22713;
int zero = 0;
int var_17 = -2147339400;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-45;
long long int var_20 = -6977131876539839328LL;
short var_21 = (short)25637;
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
