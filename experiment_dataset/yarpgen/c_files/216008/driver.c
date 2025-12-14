#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 3119132;
int var_1 = 1331012630;
unsigned long long int var_3 = 15790259034760624124ULL;
unsigned long long int var_4 = 14431854043729245624ULL;
unsigned int var_5 = 4014426117U;
unsigned char var_6 = (unsigned char)67;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
short var_9 = (short)29696;
_Bool var_10 = (_Bool)1;
int var_11 = -656286820;
unsigned int var_12 = 1821421449U;
unsigned short var_13 = (unsigned short)24580;
unsigned int var_14 = 3457002058U;
unsigned long long int var_15 = 8213187742488695962ULL;
int zero = 0;
long long int var_16 = -4321637981153543220LL;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 529808268491293461ULL;
unsigned char var_19 = (unsigned char)93;
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
