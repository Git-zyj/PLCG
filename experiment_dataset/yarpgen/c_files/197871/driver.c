#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)9;
long long int var_5 = -4708108962288442231LL;
unsigned short var_7 = (unsigned short)62817;
signed char var_10 = (signed char)-58;
signed char var_11 = (signed char)-85;
long long int var_16 = -4850704726828874670LL;
int zero = 0;
unsigned char var_18 = (unsigned char)0;
int var_19 = 308388511;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
