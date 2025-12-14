#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)88;
unsigned long long int var_2 = 1565971294871637280ULL;
signed char var_4 = (signed char)-58;
long long int var_5 = 5779756721437608753LL;
int var_7 = 1613370080;
unsigned int var_8 = 2429975569U;
unsigned long long int var_9 = 10349641436660422509ULL;
signed char var_11 = (signed char)-11;
unsigned int var_12 = 3500456776U;
long long int var_14 = 6932801136136911285LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 16805471639015280625ULL;
unsigned long long int var_19 = 7900699327778046822ULL;
unsigned int var_20 = 3164688373U;
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
