#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)44;
long long int var_1 = 7742673059802720068LL;
unsigned short var_2 = (unsigned short)9741;
unsigned short var_3 = (unsigned short)730;
int var_4 = 1117646162;
unsigned char var_5 = (unsigned char)62;
int var_6 = -1271754555;
unsigned int var_7 = 2150247864U;
unsigned short var_8 = (unsigned short)50961;
int var_9 = 710920482;
unsigned short var_11 = (unsigned short)3080;
int var_14 = -1021454573;
int zero = 0;
signed char var_16 = (signed char)-71;
long long int var_17 = 8925181342888735028LL;
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
