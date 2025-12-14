#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16882757573590873557ULL;
short var_5 = (short)-6161;
long long int var_6 = 6070612264148042662LL;
unsigned long long int var_7 = 4248826976584167845ULL;
int var_8 = 1379351091;
long long int var_9 = 1519461249284615805LL;
unsigned long long int var_13 = 10552533797941772233ULL;
unsigned short var_14 = (unsigned short)31450;
int zero = 0;
unsigned long long int var_16 = 14919791266748872212ULL;
unsigned int var_17 = 1910172826U;
signed char var_18 = (signed char)80;
_Bool var_19 = (_Bool)0;
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
