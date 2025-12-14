#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-9;
int var_5 = 444380954;
long long int var_8 = -498972108882340337LL;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)42;
int zero = 0;
unsigned short var_18 = (unsigned short)18999;
unsigned long long int var_19 = 7250312409656095620ULL;
unsigned long long int var_20 = 15587915763488618133ULL;
int var_21 = 227207978;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
