#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 271231210;
short var_9 = (short)15669;
int var_12 = 1139987074;
int zero = 0;
signed char var_17 = (signed char)-88;
signed char var_18 = (signed char)121;
int var_19 = -83454036;
unsigned short var_20 = (unsigned short)52081;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
