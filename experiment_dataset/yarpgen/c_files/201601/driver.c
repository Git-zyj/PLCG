#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51559;
long long int var_5 = -8466850726545923052LL;
int var_16 = -1245416457;
int var_17 = 1146294848;
int var_18 = 1403601728;
int zero = 0;
unsigned char var_20 = (unsigned char)43;
unsigned short var_21 = (unsigned short)31262;
signed char var_22 = (signed char)-76;
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
