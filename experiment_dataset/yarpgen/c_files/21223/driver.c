#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3066319265794488562LL;
signed char var_5 = (signed char)-118;
short var_6 = (short)-28360;
unsigned long long int var_7 = 11349736338325082319ULL;
short var_9 = (short)-27406;
long long int var_10 = -6745634634203816574LL;
int zero = 0;
signed char var_11 = (signed char)85;
unsigned char var_12 = (unsigned char)216;
unsigned char var_13 = (unsigned char)128;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
