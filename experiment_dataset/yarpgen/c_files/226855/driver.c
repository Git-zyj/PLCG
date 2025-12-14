#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2095977799118449411LL;
long long int var_1 = -6410813695025559824LL;
unsigned short var_8 = (unsigned short)19552;
signed char var_9 = (signed char)-125;
int zero = 0;
short var_11 = (short)27050;
signed char var_12 = (signed char)121;
void init() {
}

void checksum() {
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
