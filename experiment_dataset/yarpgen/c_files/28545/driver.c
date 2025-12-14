#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15126;
unsigned int var_1 = 2301364391U;
long long int var_2 = 6944209396080830543LL;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 2704842202U;
unsigned short var_6 = (unsigned short)27101;
unsigned short var_7 = (unsigned short)61351;
signed char var_9 = (signed char)124;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)34;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)4659;
_Bool var_14 = (_Bool)1;
int var_16 = -1240120776;
_Bool var_19 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
long long int var_22 = -2721880124263512332LL;
_Bool var_23 = (_Bool)0;
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
