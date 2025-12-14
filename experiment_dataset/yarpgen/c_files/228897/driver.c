#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10642;
unsigned long long int var_7 = 3341930566625521027ULL;
signed char var_9 = (signed char)-59;
int zero = 0;
unsigned char var_13 = (unsigned char)199;
unsigned long long int var_14 = 12818904281924967646ULL;
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
