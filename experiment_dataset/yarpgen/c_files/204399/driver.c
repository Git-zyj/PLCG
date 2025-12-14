#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10027207360200511402ULL;
unsigned short var_4 = (unsigned short)28949;
signed char var_5 = (signed char)96;
unsigned short var_6 = (unsigned short)4144;
long long int var_7 = -2350460116176999876LL;
unsigned long long int var_8 = 3836162825397667453ULL;
signed char var_10 = (signed char)-47;
unsigned short var_13 = (unsigned short)10824;
int var_14 = -1668562411;
int zero = 0;
signed char var_20 = (signed char)-69;
signed char var_21 = (signed char)-26;
unsigned int var_22 = 1658513530U;
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
