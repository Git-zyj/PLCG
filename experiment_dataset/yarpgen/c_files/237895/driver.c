#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 499639030015133214LL;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 4018701727U;
signed char var_9 = (signed char)21;
long long int var_11 = -2437810557529883661LL;
int var_13 = 362770462;
int zero = 0;
short var_14 = (short)-30144;
signed char var_15 = (signed char)-118;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
