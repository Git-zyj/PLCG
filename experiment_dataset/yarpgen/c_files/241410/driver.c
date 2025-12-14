#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)10786;
signed char var_7 = (signed char)-75;
unsigned char var_8 = (unsigned char)228;
signed char var_9 = (signed char)102;
int zero = 0;
signed char var_18 = (signed char)-29;
signed char var_19 = (signed char)-77;
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
