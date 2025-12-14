#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17475372630268730193ULL;
short var_1 = (short)27792;
long long int var_2 = -3439992700180253359LL;
int var_10 = -1369063739;
unsigned int var_11 = 1859265577U;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)80;
int zero = 0;
int var_17 = -2027428006;
long long int var_18 = -2486756585902752914LL;
signed char var_19 = (signed char)110;
unsigned short var_20 = (unsigned short)7631;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
