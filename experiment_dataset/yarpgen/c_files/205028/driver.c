#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)251;
signed char var_3 = (signed char)-124;
signed char var_4 = (signed char)18;
signed char var_7 = (signed char)20;
unsigned short var_13 = (unsigned short)41932;
int var_14 = 444821165;
int zero = 0;
int var_17 = 1375911428;
long long int var_18 = -1168666671337430434LL;
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
