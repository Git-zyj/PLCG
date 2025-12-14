#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)54287;
unsigned long long int var_6 = 17822382069498939657ULL;
unsigned char var_8 = (unsigned char)16;
unsigned short var_9 = (unsigned short)14099;
long long int var_10 = 5144525124948481963LL;
int var_17 = 288751329;
int zero = 0;
unsigned char var_18 = (unsigned char)253;
long long int var_19 = 4766266568476492488LL;
void init() {
}

void checksum() {
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
