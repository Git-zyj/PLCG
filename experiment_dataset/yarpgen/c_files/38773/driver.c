#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)80;
_Bool var_1 = (_Bool)1;
int var_3 = 856060317;
short var_5 = (short)-904;
long long int var_8 = -2257587335021041668LL;
unsigned char var_10 = (unsigned char)120;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)85;
unsigned long long int var_13 = 7004763341233034848ULL;
_Bool var_14 = (_Bool)1;
short var_15 = (short)32625;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
