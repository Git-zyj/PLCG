#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2564710702911566381ULL;
unsigned short var_6 = (unsigned short)46935;
signed char var_14 = (signed char)-8;
int zero = 0;
unsigned char var_20 = (unsigned char)106;
long long int var_21 = 8944354689044999655LL;
void init() {
}

void checksum() {
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
