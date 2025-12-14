#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7775828918943184814ULL;
short var_6 = (short)-23894;
long long int var_7 = 3135514924087768620LL;
int var_8 = -463120294;
int var_9 = -1843386779;
unsigned long long int var_13 = 15691121107232143602ULL;
long long int var_14 = 7546403746867495654LL;
short var_17 = (short)-118;
int zero = 0;
unsigned long long int var_18 = 11920971848632500666ULL;
short var_19 = (short)31070;
short var_20 = (short)-3380;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
