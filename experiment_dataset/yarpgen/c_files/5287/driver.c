#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -589460294;
long long int var_2 = -4139773864136950594LL;
signed char var_3 = (signed char)-73;
_Bool var_5 = (_Bool)1;
long long int var_7 = -4650041662957741707LL;
unsigned char var_9 = (unsigned char)217;
unsigned char var_12 = (unsigned char)153;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = -5860204066185237772LL;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
