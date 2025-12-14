#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3826666066U;
unsigned char var_2 = (unsigned char)115;
signed char var_9 = (signed char)62;
long long int var_10 = 3299644277271812802LL;
unsigned char var_16 = (unsigned char)86;
int zero = 0;
long long int var_17 = 2367904782381648106LL;
unsigned char var_18 = (unsigned char)119;
unsigned short var_19 = (unsigned short)27712;
signed char var_20 = (signed char)40;
signed char var_21 = (signed char)-83;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
