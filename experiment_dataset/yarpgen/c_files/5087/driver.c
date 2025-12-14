#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3536675213807436970LL;
long long int var_3 = 6494520459065872122LL;
unsigned int var_5 = 42182936U;
unsigned long long int var_6 = 16397274302923069171ULL;
unsigned long long int var_7 = 7198427118521631362ULL;
long long int var_9 = -606497064918327943LL;
unsigned long long int var_10 = 8675497434089061988ULL;
long long int var_11 = -6603162275665741098LL;
unsigned char var_12 = (unsigned char)108;
unsigned short var_13 = (unsigned short)34577;
signed char var_14 = (signed char)92;
unsigned short var_15 = (unsigned short)58103;
signed char var_16 = (signed char)90;
int var_18 = -1126671414;
int zero = 0;
int var_19 = 701549731;
unsigned long long int var_20 = 8693581414645476017ULL;
unsigned char var_21 = (unsigned char)109;
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
