#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)85;
unsigned long long int var_2 = 11004664186950721803ULL;
int var_7 = -1420586480;
short var_13 = (short)-4082;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)3;
signed char var_19 = (signed char)-1;
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
