#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)142;
unsigned int var_1 = 2123174021U;
unsigned long long int var_3 = 9664768555623640578ULL;
int var_6 = -1084641773;
unsigned long long int var_8 = 1275676467974309070ULL;
unsigned long long int var_9 = 1646518539587871907ULL;
unsigned int var_10 = 397867987U;
unsigned char var_11 = (unsigned char)179;
unsigned char var_13 = (unsigned char)145;
int zero = 0;
unsigned int var_15 = 869363552U;
unsigned long long int var_16 = 3928139360215607058ULL;
signed char var_17 = (signed char)74;
void init() {
}

void checksum() {
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
