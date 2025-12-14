#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)-125;
unsigned short var_10 = (unsigned short)29924;
unsigned short var_13 = (unsigned short)7379;
long long int var_16 = 4529303619205275762LL;
int var_18 = -2003351355;
int zero = 0;
unsigned char var_19 = (unsigned char)135;
short var_20 = (short)-4468;
signed char var_21 = (signed char)111;
void init() {
}

void checksum() {
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
