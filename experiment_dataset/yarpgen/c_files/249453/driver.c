#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)134;
unsigned short var_5 = (unsigned short)55781;
int var_7 = -284910912;
unsigned short var_13 = (unsigned short)23841;
int var_14 = 1661554921;
int var_15 = 754070064;
int zero = 0;
unsigned short var_16 = (unsigned short)26434;
unsigned short var_17 = (unsigned short)22839;
int var_18 = -1633824176;
long long int var_19 = 6419884063713834486LL;
unsigned short var_20 = (unsigned short)47582;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
