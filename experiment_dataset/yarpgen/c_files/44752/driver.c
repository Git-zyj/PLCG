#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)228;
short var_6 = (short)-2573;
unsigned char var_7 = (unsigned char)57;
int var_9 = -1952054404;
int zero = 0;
short var_18 = (short)11085;
signed char var_19 = (signed char)119;
unsigned char var_20 = (unsigned char)107;
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
