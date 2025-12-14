#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 957853130U;
unsigned char var_6 = (unsigned char)218;
signed char var_9 = (signed char)3;
unsigned char var_11 = (unsigned char)237;
int zero = 0;
long long int var_13 = 6014249293860611748LL;
unsigned short var_14 = (unsigned short)57036;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
