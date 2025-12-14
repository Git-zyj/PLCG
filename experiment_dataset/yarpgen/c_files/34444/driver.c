#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-62;
signed char var_3 = (signed char)-62;
unsigned char var_4 = (unsigned char)118;
unsigned char var_6 = (unsigned char)106;
int zero = 0;
long long int var_12 = 8938668996187687079LL;
unsigned char var_13 = (unsigned char)81;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
