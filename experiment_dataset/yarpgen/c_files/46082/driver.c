#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 87710323;
int var_1 = -678882469;
unsigned short var_2 = (unsigned short)24768;
long long int var_5 = -4520348629588658331LL;
long long int var_6 = 7671403384427881986LL;
signed char var_8 = (signed char)-55;
unsigned int var_10 = 517547761U;
short var_11 = (short)-28615;
int var_15 = 970538091;
unsigned long long int var_16 = 7266953464270430093ULL;
int var_18 = 1098400654;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)43;
signed char var_21 = (signed char)82;
signed char var_22 = (signed char)-120;
unsigned int var_23 = 3280461068U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
