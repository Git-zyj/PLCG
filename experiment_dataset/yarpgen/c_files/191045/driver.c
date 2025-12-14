#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)38;
int var_1 = 1494782454;
long long int var_4 = -496131825163862060LL;
signed char var_5 = (signed char)-71;
unsigned char var_7 = (unsigned char)38;
long long int var_9 = 5150017474827031826LL;
_Bool var_11 = (_Bool)1;
signed char var_13 = (signed char)-117;
int zero = 0;
signed char var_15 = (signed char)0;
signed char var_16 = (signed char)-76;
unsigned long long int var_17 = 14128613394400110625ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
