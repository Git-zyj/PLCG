#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-32221;
unsigned short var_2 = (unsigned short)27587;
unsigned long long int var_8 = 8172127043805697188ULL;
unsigned long long int var_10 = 9147617533188032374ULL;
int zero = 0;
unsigned long long int var_12 = 2476606728676777149ULL;
unsigned int var_13 = 1415433040U;
unsigned short var_14 = (unsigned short)37723;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
