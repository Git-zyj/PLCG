#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-112;
long long int var_3 = -6497140991068493337LL;
int var_4 = 141531851;
unsigned long long int var_5 = 10183177297437242064ULL;
signed char var_6 = (signed char)-127;
int var_7 = -1080782521;
int var_8 = 859382250;
signed char var_10 = (signed char)-92;
unsigned int var_11 = 281838754U;
int zero = 0;
signed char var_12 = (signed char)91;
unsigned char var_13 = (unsigned char)18;
int var_14 = 789793806;
unsigned long long int var_15 = 5972465445770429673ULL;
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
