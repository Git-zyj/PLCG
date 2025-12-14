#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3432915191695614700ULL;
_Bool var_1 = (_Bool)1;
unsigned long long int var_5 = 3328279947557470631ULL;
int var_7 = -155442479;
unsigned long long int var_9 = 10288459434206867369ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)88;
short var_11 = (short)-10284;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
