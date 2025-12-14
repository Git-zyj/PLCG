#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7638329819960851103ULL;
short var_3 = (short)29423;
int var_4 = 1376893996;
unsigned int var_5 = 1778188208U;
unsigned char var_7 = (unsigned char)175;
short var_9 = (short)9358;
unsigned short var_11 = (unsigned short)25310;
int zero = 0;
long long int var_12 = 7356893887018619355LL;
unsigned int var_13 = 2261011412U;
void init() {
}

void checksum() {
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
