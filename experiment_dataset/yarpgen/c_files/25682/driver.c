#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17827;
unsigned int var_2 = 316968403U;
unsigned short var_5 = (unsigned short)32078;
unsigned short var_7 = (unsigned short)8903;
unsigned long long int var_9 = 4750562505274900449ULL;
int zero = 0;
unsigned long long int var_10 = 4514714875286836373ULL;
long long int var_11 = 5678458896642819945LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
