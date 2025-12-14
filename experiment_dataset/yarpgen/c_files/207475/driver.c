#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-49;
short var_3 = (short)-21850;
unsigned short var_4 = (unsigned short)34219;
short var_5 = (short)28547;
signed char var_6 = (signed char)57;
unsigned char var_8 = (unsigned char)45;
long long int var_9 = 254954009963364452LL;
unsigned long long int var_14 = 2236538188705708716ULL;
unsigned short var_17 = (unsigned short)52092;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)93;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = -7137810700503902064LL;
short var_22 = (short)28176;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
