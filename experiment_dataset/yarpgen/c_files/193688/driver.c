#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -465059164;
int var_9 = -265722648;
int var_10 = -1335481561;
int var_11 = 572412713;
int zero = 0;
unsigned short var_13 = (unsigned short)24727;
unsigned char var_14 = (unsigned char)1;
int var_15 = -382613769;
unsigned char var_16 = (unsigned char)117;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
