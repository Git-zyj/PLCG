#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)44;
unsigned short var_3 = (unsigned short)17726;
long long int var_4 = 7849138096134452234LL;
int var_6 = 1389514433;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 3513463622561911755ULL;
unsigned long long int var_15 = 16418422470384169091ULL;
int zero = 0;
long long int var_18 = -8744354728317280013LL;
unsigned long long int var_19 = 4243413760476749989ULL;
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
