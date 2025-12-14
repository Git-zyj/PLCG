#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-114;
signed char var_9 = (signed char)84;
unsigned long long int var_10 = 11091846325135237191ULL;
int zero = 0;
signed char var_11 = (signed char)-25;
unsigned long long int var_12 = 5315848310268399240ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
