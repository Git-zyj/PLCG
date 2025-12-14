#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4771285633467895973ULL;
signed char var_1 = (signed char)-27;
long long int var_5 = 2922532297235006585LL;
signed char var_11 = (signed char)-16;
signed char var_17 = (signed char)97;
int zero = 0;
unsigned short var_19 = (unsigned short)60263;
unsigned short var_20 = (unsigned short)16144;
long long int var_21 = -7592239730555403216LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
