#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 288255046;
long long int var_2 = -5869500974811872624LL;
unsigned long long int var_3 = 7151212631849984557ULL;
short var_5 = (short)-13929;
signed char var_6 = (signed char)-50;
short var_7 = (short)-11851;
signed char var_8 = (signed char)-16;
short var_9 = (short)14957;
long long int var_12 = -4183947045652592631LL;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_18 = (short)-1864;
unsigned int var_19 = 3458406790U;
unsigned long long int var_20 = 8351541667792388006ULL;
unsigned long long int var_21 = 13336793756522184027ULL;
void init() {
}

void checksum() {
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
