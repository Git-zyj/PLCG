#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2849165671U;
unsigned char var_2 = (unsigned char)242;
unsigned long long int var_3 = 5402905879613364131ULL;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)250;
unsigned char var_9 = (unsigned char)201;
unsigned char var_10 = (unsigned char)33;
int zero = 0;
long long int var_11 = -2919489233465977945LL;
long long int var_12 = 1107952678218209494LL;
long long int var_13 = 6692708883624705444LL;
unsigned char var_14 = (unsigned char)188;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
