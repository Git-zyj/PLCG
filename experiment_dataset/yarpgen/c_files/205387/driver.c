#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12426786890422375899ULL;
_Bool var_5 = (_Bool)0;
short var_6 = (short)19588;
unsigned char var_8 = (unsigned char)78;
_Bool var_13 = (_Bool)0;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 14962921247227261004ULL;
unsigned int var_18 = 1399202227U;
short var_19 = (short)19240;
void init() {
}

void checksum() {
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
