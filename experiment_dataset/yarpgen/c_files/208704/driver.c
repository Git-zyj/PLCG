#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-45;
unsigned short var_7 = (unsigned short)34460;
int zero = 0;
unsigned short var_17 = (unsigned short)26392;
signed char var_18 = (signed char)-33;
signed char var_19 = (signed char)-123;
signed char var_20 = (signed char)88;
signed char var_21 = (signed char)-63;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
