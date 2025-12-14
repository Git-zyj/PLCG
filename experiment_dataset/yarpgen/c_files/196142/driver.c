#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-10057;
unsigned short var_8 = (unsigned short)55539;
unsigned short var_9 = (unsigned short)46996;
signed char var_19 = (signed char)-73;
int zero = 0;
unsigned long long int var_20 = 17789315843874197291ULL;
long long int var_21 = -216465406339314844LL;
unsigned char var_22 = (unsigned char)223;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
