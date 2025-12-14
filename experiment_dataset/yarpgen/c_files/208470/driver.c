#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 755806307U;
long long int var_3 = 7651624100798415577LL;
unsigned short var_10 = (unsigned short)26413;
unsigned char var_18 = (unsigned char)217;
int zero = 0;
unsigned int var_19 = 194031848U;
int var_20 = 1382544457;
void init() {
}

void checksum() {
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
