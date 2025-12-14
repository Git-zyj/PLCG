#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 28002615;
long long int var_6 = 987632792557098156LL;
unsigned int var_7 = 595852345U;
unsigned short var_9 = (unsigned short)20599;
signed char var_15 = (signed char)-44;
int zero = 0;
signed char var_20 = (signed char)-100;
unsigned char var_21 = (unsigned char)150;
void init() {
}

void checksum() {
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
