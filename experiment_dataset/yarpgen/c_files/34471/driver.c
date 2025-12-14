#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)54;
unsigned char var_7 = (unsigned char)89;
unsigned short var_9 = (unsigned short)10093;
short var_11 = (short)5889;
int zero = 0;
long long int var_12 = -7022515390839719388LL;
long long int var_13 = -1187171926940113945LL;
unsigned long long int var_14 = 5914405321729759381ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
