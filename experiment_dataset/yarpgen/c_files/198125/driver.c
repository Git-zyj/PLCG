#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 11435995717597312750ULL;
unsigned long long int var_9 = 16177995980861598224ULL;
int zero = 0;
signed char var_11 = (signed char)-89;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)202;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
