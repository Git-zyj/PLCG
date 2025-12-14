#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1331;
long long int var_1 = -7824318735235227149LL;
unsigned long long int var_3 = 4326554685724864907ULL;
unsigned char var_4 = (unsigned char)86;
long long int var_6 = 823679411742184458LL;
int var_7 = -1798457273;
long long int var_9 = 9166730750538086977LL;
unsigned short var_10 = (unsigned short)24206;
long long int var_12 = -687683951324464460LL;
unsigned char var_13 = (unsigned char)116;
signed char var_14 = (signed char)30;
int zero = 0;
unsigned char var_16 = (unsigned char)53;
long long int var_17 = -5390997383340131929LL;
unsigned char var_18 = (unsigned char)252;
unsigned char var_19 = (unsigned char)255;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
