#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 910198570608197908LL;
unsigned char var_2 = (unsigned char)196;
unsigned int var_3 = 685508403U;
unsigned char var_5 = (unsigned char)204;
short var_6 = (short)-10513;
unsigned long long int var_10 = 12747600633485344280ULL;
long long int var_11 = 750461117053826135LL;
long long int var_12 = -1883653686550276685LL;
unsigned char var_14 = (unsigned char)44;
int var_16 = -968013482;
int zero = 0;
unsigned long long int var_17 = 7544065474475996157ULL;
int var_18 = 786740043;
unsigned char var_19 = (unsigned char)252;
unsigned long long int var_20 = 4085664090521945573ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
