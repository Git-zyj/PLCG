#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 7587550623992299000ULL;
unsigned char var_7 = (unsigned char)82;
unsigned long long int var_8 = 2464239286488650848ULL;
long long int var_11 = -4135166444403060314LL;
long long int var_12 = 7814819941961727975LL;
int zero = 0;
unsigned char var_13 = (unsigned char)101;
short var_14 = (short)15284;
void init() {
}

void checksum() {
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
