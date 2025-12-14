#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4169315681270892156LL;
_Bool var_6 = (_Bool)0;
unsigned short var_9 = (unsigned short)51350;
unsigned short var_11 = (unsigned short)51651;
unsigned long long int var_13 = 3464977058212924062ULL;
int var_19 = 1271203121;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)123;
unsigned short var_22 = (unsigned short)50276;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
