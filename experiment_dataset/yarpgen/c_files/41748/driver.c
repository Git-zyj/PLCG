#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)59190;
unsigned int var_3 = 2615834359U;
unsigned short var_4 = (unsigned short)37418;
unsigned int var_6 = 2551508050U;
signed char var_7 = (signed char)112;
unsigned int var_9 = 3544163388U;
int var_10 = -1679521011;
int var_11 = 493913133;
unsigned int var_13 = 4177566651U;
int var_14 = 648106377;
int var_15 = -771765457;
int zero = 0;
long long int var_16 = 1453243574955959530LL;
unsigned short var_17 = (unsigned short)43310;
long long int var_18 = 6496282182087073910LL;
signed char var_19 = (signed char)96;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
