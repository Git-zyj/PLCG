#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2128152457;
signed char var_1 = (signed char)-77;
signed char var_2 = (signed char)-112;
int var_3 = -1846852036;
unsigned long long int var_4 = 1724870327552086439ULL;
unsigned char var_5 = (unsigned char)49;
short var_6 = (short)28294;
signed char var_7 = (signed char)50;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)5;
short var_10 = (short)-14779;
signed char var_11 = (signed char)22;
long long int var_12 = -6785141221047946484LL;
signed char var_13 = (signed char)-69;
signed char var_14 = (signed char)-127;
_Bool var_15 = (_Bool)0;
short var_17 = (short)21523;
signed char var_18 = (signed char)68;
int zero = 0;
unsigned long long int var_19 = 15298757171391518561ULL;
signed char var_20 = (signed char)-51;
signed char var_21 = (signed char)100;
int var_22 = -1989584181;
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
