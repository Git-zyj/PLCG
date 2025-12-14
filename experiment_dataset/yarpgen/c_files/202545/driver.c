#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)85;
unsigned short var_14 = (unsigned short)64474;
unsigned short var_17 = (unsigned short)40624;
int zero = 0;
unsigned short var_18 = (unsigned short)53572;
long long int var_19 = 2115544586437409522LL;
signed char var_20 = (signed char)-33;
signed char var_21 = (signed char)77;
void init() {
}

void checksum() {
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
