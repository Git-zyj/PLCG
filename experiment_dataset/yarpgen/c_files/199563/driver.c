#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)109;
unsigned short var_11 = (unsigned short)16231;
unsigned long long int var_12 = 10371479267427330637ULL;
signed char var_14 = (signed char)-5;
int zero = 0;
int var_18 = -276941823;
unsigned long long int var_19 = 9645863585870655361ULL;
long long int var_20 = 2566330271099608963LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
