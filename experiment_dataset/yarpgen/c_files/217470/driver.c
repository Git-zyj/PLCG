#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)235;
unsigned int var_9 = 181847284U;
signed char var_10 = (signed char)-76;
int var_11 = -1137886443;
long long int var_12 = -8439997349482720370LL;
int zero = 0;
unsigned short var_14 = (unsigned short)47940;
unsigned short var_15 = (unsigned short)41576;
unsigned int var_16 = 2064963227U;
unsigned char var_17 = (unsigned char)111;
void init() {
}

void checksum() {
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
