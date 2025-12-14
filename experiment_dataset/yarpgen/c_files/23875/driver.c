#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)109;
unsigned char var_8 = (unsigned char)55;
long long int var_11 = -4349733723221111864LL;
unsigned long long int var_13 = 13148356578207493306ULL;
int zero = 0;
int var_20 = -327940246;
int var_21 = -1547879947;
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
