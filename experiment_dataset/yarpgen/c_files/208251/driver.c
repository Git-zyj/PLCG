#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3101657833U;
_Bool var_4 = (_Bool)0;
long long int var_9 = 6657862184981236784LL;
unsigned int var_10 = 2995285776U;
_Bool var_11 = (_Bool)0;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)53571;
unsigned int var_16 = 845754466U;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 2546922793U;
_Bool var_21 = (_Bool)1;
long long int var_22 = -4483855001235721970LL;
unsigned short var_23 = (unsigned short)29385;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
