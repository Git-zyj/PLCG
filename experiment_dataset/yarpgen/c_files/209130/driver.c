#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1129664658594191203LL;
unsigned int var_3 = 389924157U;
unsigned short var_8 = (unsigned short)27636;
int var_9 = -236123577;
unsigned char var_12 = (unsigned char)32;
_Bool var_13 = (_Bool)0;
short var_15 = (short)18405;
unsigned long long int var_17 = 11640363983758051572ULL;
int zero = 0;
long long int var_19 = -316884227607629981LL;
long long int var_20 = 5442879937207959879LL;
int var_21 = -1908206775;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
