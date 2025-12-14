#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8116788835177572817LL;
int var_4 = -1234725001;
unsigned long long int var_8 = 13231535006132584419ULL;
unsigned char var_9 = (unsigned char)227;
long long int var_13 = -7288893982696154120LL;
unsigned char var_14 = (unsigned char)215;
int zero = 0;
unsigned int var_16 = 654773489U;
unsigned int var_17 = 2707195632U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
