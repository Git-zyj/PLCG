#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1432874190;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 795661779U;
_Bool var_8 = (_Bool)0;
unsigned long long int var_13 = 3784214782192290669ULL;
unsigned long long int var_14 = 1914845311976496829ULL;
int var_15 = -60596001;
int zero = 0;
int var_18 = 724315203;
signed char var_19 = (signed char)-104;
void init() {
}

void checksum() {
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
