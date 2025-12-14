#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 880871179649151010LL;
unsigned short var_2 = (unsigned short)20768;
unsigned long long int var_3 = 5877548332671620958ULL;
int var_5 = 1529957591;
unsigned int var_6 = 3889403610U;
short var_7 = (short)12836;
int var_8 = 1203435854;
unsigned char var_9 = (unsigned char)208;
int var_10 = 1458119454;
int zero = 0;
long long int var_11 = -573577162234195285LL;
unsigned char var_12 = (unsigned char)117;
unsigned long long int var_13 = 1681187599149698011ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
