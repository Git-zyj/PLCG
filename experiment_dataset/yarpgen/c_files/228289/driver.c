#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-121;
_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 15338085172638436799ULL;
unsigned long long int var_6 = 737708907119416914ULL;
signed char var_8 = (signed char)114;
short var_9 = (short)-8651;
int zero = 0;
unsigned int var_12 = 2595636716U;
int var_13 = 1181535040;
int var_14 = -571540922;
_Bool var_15 = (_Bool)0;
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
