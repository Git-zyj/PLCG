#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7639144825879660819LL;
unsigned short var_1 = (unsigned short)50776;
signed char var_2 = (signed char)-1;
short var_4 = (short)16658;
int var_8 = 1553833786;
unsigned long long int var_9 = 14937089518928727137ULL;
_Bool var_11 = (_Bool)0;
signed char var_14 = (signed char)26;
unsigned char var_15 = (unsigned char)155;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)45;
int zero = 0;
int var_19 = 122929986;
unsigned int var_20 = 2702905581U;
int var_21 = 506058317;
int var_22 = -1079736361;
unsigned short var_23 = (unsigned short)36351;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
