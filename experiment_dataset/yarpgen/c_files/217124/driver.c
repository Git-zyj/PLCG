#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 29537896394590159LL;
unsigned long long int var_3 = 8421697064100070421ULL;
unsigned long long int var_4 = 15220359968126029405ULL;
unsigned long long int var_8 = 13629168631036219551ULL;
signed char var_11 = (signed char)-89;
int zero = 0;
unsigned int var_20 = 368899859U;
unsigned short var_21 = (unsigned short)42754;
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
