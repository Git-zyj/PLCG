#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)98;
unsigned long long int var_4 = 914756302042737892ULL;
unsigned char var_7 = (unsigned char)88;
signed char var_15 = (signed char)-56;
int zero = 0;
unsigned long long int var_18 = 6953419007173219720ULL;
unsigned short var_19 = (unsigned short)57848;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
