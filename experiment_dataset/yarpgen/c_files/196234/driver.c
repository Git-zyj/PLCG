#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-28814;
long long int var_3 = 7642446538119125296LL;
long long int var_4 = -8027061163024005947LL;
unsigned short var_9 = (unsigned short)52552;
long long int var_10 = -5233401662686824431LL;
int zero = 0;
signed char var_17 = (signed char)-12;
short var_18 = (short)-7489;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
