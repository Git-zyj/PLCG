#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3951164824842269003ULL;
long long int var_5 = 5681955073532337501LL;
unsigned short var_8 = (unsigned short)3785;
int var_9 = 1602569337;
int zero = 0;
unsigned short var_12 = (unsigned short)50739;
unsigned long long int var_13 = 3218447439694376275ULL;
unsigned char var_14 = (unsigned char)44;
signed char var_15 = (signed char)-56;
unsigned long long int var_16 = 760811599404709987ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
