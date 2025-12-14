#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)98;
unsigned short var_5 = (unsigned short)41682;
int var_6 = 119061724;
signed char var_7 = (signed char)-64;
int var_10 = -1984550809;
long long int var_17 = -4808884091117458572LL;
int zero = 0;
int var_18 = -1874680593;
signed char var_19 = (signed char)122;
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
