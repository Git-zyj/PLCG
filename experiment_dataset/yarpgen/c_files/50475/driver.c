#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 13181068185835084940ULL;
_Bool var_7 = (_Bool)0;
signed char var_10 = (signed char)52;
unsigned char var_11 = (unsigned char)121;
int zero = 0;
unsigned short var_14 = (unsigned short)3963;
signed char var_15 = (signed char)-126;
unsigned long long int var_16 = 9076019661330841381ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
