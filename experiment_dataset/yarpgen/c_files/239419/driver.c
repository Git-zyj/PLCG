#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)18;
unsigned long long int var_1 = 6489504827003371981ULL;
signed char var_3 = (signed char)-26;
unsigned long long int var_6 = 6960301148644469091ULL;
unsigned char var_12 = (unsigned char)109;
int zero = 0;
unsigned char var_18 = (unsigned char)146;
unsigned char var_19 = (unsigned char)82;
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
