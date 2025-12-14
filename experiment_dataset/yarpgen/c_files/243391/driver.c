#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 734595406;
unsigned long long int var_6 = 422645804658058652ULL;
long long int var_7 = 3874785225788087084LL;
unsigned char var_9 = (unsigned char)12;
short var_12 = (short)3177;
int zero = 0;
signed char var_13 = (signed char)-74;
unsigned long long int var_14 = 4269134893521123103ULL;
short var_15 = (short)15167;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
