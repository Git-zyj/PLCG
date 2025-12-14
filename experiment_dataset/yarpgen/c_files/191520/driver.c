#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2337907142088717940LL;
_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)1;
short var_4 = (short)24909;
long long int var_6 = -4674287583802297750LL;
_Bool var_8 = (_Bool)0;
int var_9 = 1393868262;
unsigned long long int var_10 = 3738465448244302683ULL;
int var_11 = -695568154;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)164;
short var_14 = (short)-11739;
long long int var_15 = -2675578279729972100LL;
unsigned int var_16 = 3784990132U;
int zero = 0;
signed char var_17 = (signed char)37;
unsigned short var_18 = (unsigned short)55749;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
