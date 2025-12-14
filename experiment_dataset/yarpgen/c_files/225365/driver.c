#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1747399181;
unsigned char var_3 = (unsigned char)174;
long long int var_4 = 4292143994285979343LL;
int var_13 = 799390288;
signed char var_14 = (signed char)23;
signed char var_16 = (signed char)82;
int zero = 0;
signed char var_19 = (signed char)-33;
signed char var_20 = (signed char)-120;
signed char var_21 = (signed char)123;
void init() {
}

void checksum() {
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
