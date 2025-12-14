#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-25;
unsigned long long int var_4 = 14927180401425748866ULL;
long long int var_5 = -449482926186502733LL;
unsigned long long int var_6 = 1984162156484714464ULL;
signed char var_8 = (signed char)93;
unsigned long long int var_9 = 1778696927518669161ULL;
signed char var_10 = (signed char)-4;
long long int var_11 = 740149288037096182LL;
int zero = 0;
signed char var_13 = (signed char)-20;
long long int var_14 = -5108540960730460737LL;
long long int var_15 = -8122955516955450012LL;
unsigned long long int var_16 = 9368099121703926448ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
