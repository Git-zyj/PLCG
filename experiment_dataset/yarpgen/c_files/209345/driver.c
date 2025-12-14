#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1282897426;
signed char var_1 = (signed char)-121;
unsigned short var_2 = (unsigned short)37132;
short var_4 = (short)17653;
signed char var_5 = (signed char)57;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)55;
unsigned long long int var_10 = 14065617609843633650ULL;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-102;
unsigned short var_13 = (unsigned short)65039;
signed char var_14 = (signed char)-90;
short var_15 = (short)11634;
int var_16 = 66232587;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned short var_18 = (unsigned short)41314;
int var_19 = -1786009620;
long long int var_20 = -6085488909404183048LL;
_Bool var_21 = (_Bool)0;
long long int var_22 = -7576803228510244716LL;
unsigned short var_23 = (unsigned short)38886;
signed char var_24 = (signed char)-19;
signed char var_25 = (signed char)-22;
_Bool var_26 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
