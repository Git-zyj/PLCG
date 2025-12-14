#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3799823720315547166LL;
unsigned char var_1 = (unsigned char)192;
long long int var_5 = 9180647109693224329LL;
short var_8 = (short)7264;
unsigned long long int var_11 = 12920231556286875779ULL;
int zero = 0;
int var_12 = 747471400;
unsigned long long int var_13 = 17366956664717274760ULL;
long long int var_14 = -2898047004825941945LL;
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
