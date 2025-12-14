#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)49;
unsigned int var_6 = 3693287836U;
unsigned int var_8 = 2160855895U;
unsigned long long int var_9 = 28468365363461475ULL;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-64;
unsigned char var_18 = (unsigned char)37;
int zero = 0;
int var_19 = 1421290955;
unsigned int var_20 = 1747938984U;
int var_21 = 1724927837;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
