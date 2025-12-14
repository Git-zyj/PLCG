#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 11372350545556583902ULL;
unsigned long long int var_8 = 13265966373086135212ULL;
short var_10 = (short)19770;
unsigned long long int var_13 = 10494487349211168949ULL;
int zero = 0;
signed char var_19 = (signed char)-16;
long long int var_20 = 7647900231972219251LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
