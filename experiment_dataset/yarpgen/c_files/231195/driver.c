#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)194;
unsigned int var_6 = 4139299146U;
int var_16 = -1347083931;
int zero = 0;
unsigned long long int var_18 = 6354421175599573396ULL;
long long int var_19 = 1470161546504851793LL;
unsigned long long int var_20 = 18377333954306525350ULL;
unsigned int var_21 = 3097009116U;
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
