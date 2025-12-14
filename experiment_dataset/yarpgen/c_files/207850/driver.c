#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6666;
unsigned short var_2 = (unsigned short)27348;
signed char var_7 = (signed char)0;
int var_8 = -1084540408;
long long int var_11 = -6836867400200684193LL;
signed char var_14 = (signed char)-39;
int zero = 0;
short var_16 = (short)682;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
