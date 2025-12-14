#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15049;
signed char var_1 = (signed char)10;
_Bool var_2 = (_Bool)0;
long long int var_5 = -6229961278135961276LL;
unsigned int var_6 = 3635897675U;
short var_9 = (short)-28898;
long long int var_13 = -1007828074242465632LL;
unsigned long long int var_14 = 4954502217896337911ULL;
long long int var_15 = -6516776105209411886LL;
short var_16 = (short)-15426;
long long int var_17 = -3747467267731622999LL;
int zero = 0;
unsigned int var_18 = 4114023125U;
unsigned int var_19 = 10369461U;
long long int var_20 = 8677719123388525860LL;
void init() {
}

void checksum() {
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
