#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-38;
int var_2 = 1919964268;
unsigned int var_3 = 4149401573U;
signed char var_4 = (signed char)-28;
unsigned int var_6 = 2024437882U;
unsigned long long int var_7 = 12208247231408231393ULL;
long long int var_8 = -4323040329654488226LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_11 = -8744634233351411789LL;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-52;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
