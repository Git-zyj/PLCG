#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-121;
unsigned long long int var_6 = 28796503219878850ULL;
int var_8 = 812009827;
unsigned long long int var_9 = 2406549072263921951ULL;
int var_10 = -1272231071;
signed char var_11 = (signed char)-15;
int zero = 0;
int var_13 = -1534043377;
signed char var_14 = (signed char)73;
int var_15 = 227337904;
unsigned long long int var_16 = 9387995989524501249ULL;
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
