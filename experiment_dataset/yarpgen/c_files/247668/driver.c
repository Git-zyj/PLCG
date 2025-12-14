#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-32112;
unsigned short var_2 = (unsigned short)8315;
int var_4 = -1462591816;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)-23;
long long int var_8 = 6818363727690361464LL;
signed char var_9 = (signed char)62;
long long int var_12 = -1616453007845040509LL;
unsigned long long int var_13 = 16360594964781991607ULL;
short var_14 = (short)30723;
long long int var_15 = -5010206726757865888LL;
int zero = 0;
int var_17 = 2044848944;
unsigned short var_18 = (unsigned short)52665;
unsigned int var_19 = 4178203920U;
unsigned long long int var_20 = 17953199538854376262ULL;
signed char var_21 = (signed char)-75;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
