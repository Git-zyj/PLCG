#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)92;
unsigned short var_1 = (unsigned short)20289;
signed char var_3 = (signed char)104;
int var_5 = -740301090;
unsigned short var_6 = (unsigned short)41537;
signed char var_9 = (signed char)-76;
int zero = 0;
long long int var_10 = -4230584961093619179LL;
signed char var_11 = (signed char)-94;
long long int var_12 = -8326497149720989345LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
