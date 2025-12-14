#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)112;
unsigned char var_3 = (unsigned char)82;
signed char var_9 = (signed char)57;
signed char var_10 = (signed char)62;
signed char var_13 = (signed char)16;
signed char var_15 = (signed char)82;
signed char var_17 = (signed char)39;
int zero = 0;
unsigned char var_18 = (unsigned char)169;
signed char var_19 = (signed char)-76;
signed char var_20 = (signed char)20;
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
