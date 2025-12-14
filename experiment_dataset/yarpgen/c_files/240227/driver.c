#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29555;
long long int var_2 = -7979900659094150695LL;
signed char var_4 = (signed char)-102;
unsigned long long int var_5 = 18242940810687803363ULL;
short var_8 = (short)-9750;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)0;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = 6587350405540341LL;
long long int var_16 = -479078160565559260LL;
signed char var_17 = (signed char)-95;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
