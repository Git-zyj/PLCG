#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)213;
long long int var_7 = -2532594277440309527LL;
short var_8 = (short)-2742;
unsigned long long int var_9 = 13370177022361032197ULL;
int zero = 0;
long long int var_10 = 8876198511527903882LL;
_Bool var_11 = (_Bool)1;
int var_12 = -1754057104;
unsigned char var_13 = (unsigned char)235;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
