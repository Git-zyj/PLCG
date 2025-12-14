#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-27;
signed char var_2 = (signed char)91;
long long int var_3 = -3873539652194670850LL;
long long int var_4 = -3193657118137536588LL;
int var_5 = 925561324;
unsigned short var_6 = (unsigned short)9443;
unsigned char var_9 = (unsigned char)84;
int zero = 0;
int var_20 = -535584046;
signed char var_21 = (signed char)-70;
signed char var_22 = (signed char)40;
signed char var_23 = (signed char)-41;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
