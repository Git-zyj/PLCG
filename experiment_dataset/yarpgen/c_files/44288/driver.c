#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2485386604151384435LL;
unsigned short var_1 = (unsigned short)32596;
unsigned int var_2 = 1704548054U;
unsigned int var_3 = 4041106948U;
unsigned char var_4 = (unsigned char)145;
unsigned long long int var_5 = 17219145558223751383ULL;
unsigned int var_6 = 2354077000U;
unsigned long long int var_8 = 572940367512428846ULL;
unsigned int var_10 = 3638443786U;
unsigned long long int var_11 = 18258086094290277101ULL;
int zero = 0;
unsigned int var_15 = 3407215663U;
signed char var_16 = (signed char)-81;
unsigned short var_17 = (unsigned short)60017;
short var_18 = (short)5901;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
