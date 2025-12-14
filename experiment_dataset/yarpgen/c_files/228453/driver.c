#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8463448169198969327LL;
unsigned short var_5 = (unsigned short)34556;
long long int var_6 = 3148573735168597833LL;
signed char var_10 = (signed char)-64;
_Bool var_11 = (_Bool)1;
short var_13 = (short)-31184;
int zero = 0;
short var_15 = (short)6138;
signed char var_16 = (signed char)-43;
signed char var_17 = (signed char)104;
unsigned long long int var_18 = 16471932632642080133ULL;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
