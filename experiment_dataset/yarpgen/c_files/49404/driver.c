#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)51;
signed char var_5 = (signed char)-68;
short var_7 = (short)555;
long long int var_10 = 6660963173799626070LL;
unsigned int var_11 = 656537293U;
unsigned int var_13 = 3752059304U;
long long int var_15 = -2637542838888419127LL;
int zero = 0;
int var_20 = 1054627323;
unsigned char var_21 = (unsigned char)46;
void init() {
}

void checksum() {
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
