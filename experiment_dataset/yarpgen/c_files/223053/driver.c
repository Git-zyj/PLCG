#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25256;
long long int var_2 = 197862530612466967LL;
unsigned char var_3 = (unsigned char)35;
unsigned char var_5 = (unsigned char)229;
unsigned long long int var_9 = 2442706290068140543ULL;
long long int var_14 = 4846153955056254248LL;
int zero = 0;
unsigned short var_17 = (unsigned short)29504;
long long int var_18 = -4352109324527899129LL;
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
