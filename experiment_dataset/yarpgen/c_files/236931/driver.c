#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-126;
long long int var_2 = -5685840415255423664LL;
long long int var_4 = 2569107992880525659LL;
int var_7 = 95455824;
long long int var_16 = 207306175509124639LL;
int zero = 0;
unsigned char var_17 = (unsigned char)25;
signed char var_18 = (signed char)-51;
unsigned short var_19 = (unsigned short)42930;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
