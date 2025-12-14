#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)31;
short var_4 = (short)10123;
_Bool var_7 = (_Bool)0;
unsigned short var_9 = (unsigned short)6234;
unsigned short var_12 = (unsigned short)16743;
unsigned int var_15 = 995031961U;
unsigned short var_16 = (unsigned short)44381;
signed char var_17 = (signed char)21;
int zero = 0;
int var_19 = 583535263;
unsigned long long int var_20 = 11621621597452906944ULL;
unsigned long long int var_21 = 4727576576443817591ULL;
_Bool var_22 = (_Bool)0;
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
