#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-105;
signed char var_3 = (signed char)36;
signed char var_6 = (signed char)-108;
unsigned char var_7 = (unsigned char)82;
signed char var_8 = (signed char)-5;
unsigned long long int var_11 = 6485785750440441209ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_17 = (short)5661;
unsigned short var_18 = (unsigned short)23230;
signed char var_19 = (signed char)26;
void init() {
}

void checksum() {
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
