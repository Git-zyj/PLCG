#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)2311;
long long int var_2 = 1844460228131286741LL;
short var_3 = (short)16478;
unsigned int var_4 = 3642006060U;
unsigned int var_5 = 459266095U;
int var_6 = -1041199389;
signed char var_7 = (signed char)-49;
long long int var_9 = 185038183613656838LL;
signed char var_10 = (signed char)-99;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)178;
int var_15 = -220463011;
unsigned long long int var_16 = 4795566656229626648ULL;
unsigned int var_17 = 170174528U;
signed char var_18 = (signed char)-10;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
