#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)211;
unsigned int var_1 = 4242306868U;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)-1;
unsigned int var_8 = 1098860345U;
signed char var_9 = (signed char)5;
unsigned int var_14 = 1659524424U;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_19 = -8911423010645356895LL;
int var_20 = -966072601;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 1317127126U;
void init() {
}

void checksum() {
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
