#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)89;
unsigned short var_5 = (unsigned short)40434;
unsigned char var_8 = (unsigned char)209;
signed char var_9 = (signed char)-80;
long long int var_10 = 4658786653163784036LL;
int zero = 0;
signed char var_13 = (signed char)112;
unsigned int var_14 = 766903874U;
long long int var_15 = 2553275104623464682LL;
void init() {
}

void checksum() {
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
