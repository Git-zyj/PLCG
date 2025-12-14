#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)123;
short var_1 = (short)-32184;
unsigned int var_2 = 515701131U;
unsigned long long int var_4 = 330995901547250480ULL;
short var_5 = (short)5511;
long long int var_6 = 1374003528347013780LL;
short var_9 = (short)25238;
int var_11 = -137243086;
unsigned short var_12 = (unsigned short)21349;
_Bool var_13 = (_Bool)0;
unsigned long long int var_15 = 5971981103291585829ULL;
unsigned long long int var_16 = 16985269975692574893ULL;
signed char var_17 = (signed char)-112;
int zero = 0;
unsigned long long int var_20 = 9735179297287143749ULL;
unsigned char var_21 = (unsigned char)120;
unsigned char var_22 = (unsigned char)208;
int var_23 = 621092099;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
