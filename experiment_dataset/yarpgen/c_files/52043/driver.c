#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3252600145U;
short var_2 = (short)22384;
unsigned long long int var_4 = 7597207127041887455ULL;
short var_6 = (short)-19244;
signed char var_7 = (signed char)-101;
int var_8 = -1608473229;
signed char var_9 = (signed char)-39;
short var_10 = (short)20982;
short var_11 = (short)-2600;
_Bool var_12 = (_Bool)0;
int var_15 = 131375744;
int zero = 0;
unsigned long long int var_16 = 3599169965503792532ULL;
long long int var_17 = -682718494114006716LL;
long long int var_18 = -3138942308739049454LL;
long long int var_19 = -4129871380345824791LL;
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
