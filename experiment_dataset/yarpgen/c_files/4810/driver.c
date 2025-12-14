#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17693;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)0;
short var_9 = (short)-27584;
unsigned int var_10 = 316518937U;
signed char var_11 = (signed char)-121;
signed char var_13 = (signed char)47;
unsigned int var_16 = 515615415U;
int zero = 0;
signed char var_17 = (signed char)105;
unsigned int var_18 = 165865081U;
short var_19 = (short)-2484;
unsigned int var_20 = 47244683U;
unsigned int var_21 = 2138252768U;
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
