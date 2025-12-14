#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1294690425;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)87;
signed char var_4 = (signed char)20;
unsigned long long int var_5 = 9130705426459055548ULL;
unsigned short var_8 = (unsigned short)27880;
unsigned long long int var_9 = 15015092621027373340ULL;
unsigned char var_10 = (unsigned char)103;
signed char var_11 = (signed char)100;
unsigned char var_12 = (unsigned char)102;
unsigned int var_13 = 2486950162U;
signed char var_14 = (signed char)-98;
int zero = 0;
long long int var_15 = 8356661563698144721LL;
int var_16 = -1521062238;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
