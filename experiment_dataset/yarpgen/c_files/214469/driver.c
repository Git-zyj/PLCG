#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_3 = -1196795384;
unsigned short var_4 = (unsigned short)44355;
long long int var_6 = 2878063063573335956LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 858422250U;
unsigned char var_19 = (unsigned char)105;
signed char var_20 = (signed char)-3;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
