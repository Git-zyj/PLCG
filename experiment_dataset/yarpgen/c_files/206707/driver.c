#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)0;
unsigned long long int var_7 = 2685830716538208540ULL;
unsigned long long int var_13 = 13027182077742546978ULL;
int zero = 0;
unsigned int var_18 = 257597862U;
unsigned int var_19 = 1066385073U;
long long int var_20 = 5047135937586476191LL;
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
