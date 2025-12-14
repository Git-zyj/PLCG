#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -450534654;
long long int var_6 = 6779102703434241774LL;
unsigned int var_9 = 2901653562U;
int zero = 0;
long long int var_15 = 8373628774566684745LL;
unsigned char var_16 = (unsigned char)10;
long long int var_17 = -642957309634479838LL;
signed char var_18 = (signed char)-57;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
