#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -862475738;
signed char var_6 = (signed char)62;
unsigned long long int var_8 = 9424359425520165303ULL;
int var_9 = -1532779075;
int var_10 = -545936856;
int zero = 0;
signed char var_17 = (signed char)82;
unsigned short var_18 = (unsigned short)31007;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
