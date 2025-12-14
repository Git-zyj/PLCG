#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)209;
unsigned long long int var_8 = 6538523008113474685ULL;
signed char var_9 = (signed char)-100;
long long int var_10 = 710003036071226367LL;
int zero = 0;
signed char var_13 = (signed char)-106;
unsigned short var_14 = (unsigned short)64879;
long long int var_15 = 5045819175010808103LL;
unsigned char var_16 = (unsigned char)36;
signed char var_17 = (signed char)-69;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
