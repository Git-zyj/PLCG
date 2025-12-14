#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64699;
long long int var_2 = 8383830520658437386LL;
_Bool var_3 = (_Bool)0;
short var_4 = (short)-10662;
long long int var_6 = -7948469080358642625LL;
long long int var_8 = 2771995117977643148LL;
_Bool var_9 = (_Bool)0;
signed char var_12 = (signed char)-39;
int zero = 0;
long long int var_15 = -1570873522448693105LL;
int var_16 = -2056506869;
unsigned int var_17 = 593131259U;
unsigned char var_18 = (unsigned char)254;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
