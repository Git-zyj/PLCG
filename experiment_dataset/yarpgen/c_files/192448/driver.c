#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)214;
unsigned long long int var_2 = 8464137008450568972ULL;
unsigned long long int var_3 = 4672827472054222164ULL;
int var_4 = -1269093664;
unsigned char var_5 = (unsigned char)42;
short var_8 = (short)27145;
unsigned short var_9 = (unsigned short)29381;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1824074232U;
int var_13 = -881504542;
_Bool var_15 = (_Bool)1;
unsigned long long int var_18 = 438251599507906861ULL;
int zero = 0;
short var_19 = (short)-18027;
short var_20 = (short)27290;
unsigned long long int var_21 = 13876060276833939735ULL;
unsigned char var_22 = (unsigned char)248;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
