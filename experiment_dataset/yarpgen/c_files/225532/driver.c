#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 428647275U;
signed char var_5 = (signed char)-83;
int var_7 = 345739614;
signed char var_9 = (signed char)-43;
unsigned char var_10 = (unsigned char)25;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 434811208761860852ULL;
int zero = 0;
unsigned long long int var_16 = 6350395996909846166ULL;
int var_17 = -1702528736;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
