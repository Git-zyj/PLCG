#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2078261687U;
unsigned int var_2 = 2249042797U;
_Bool var_3 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned long long int var_8 = 1188609083858339748ULL;
long long int var_9 = 8004468044591365330LL;
unsigned int var_13 = 400354324U;
_Bool var_15 = (_Bool)1;
long long int var_17 = -7850154376903793916LL;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 14774032476980703618ULL;
unsigned int var_21 = 649222860U;
int var_22 = -1174060561;
long long int var_23 = -8993355347976200897LL;
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
