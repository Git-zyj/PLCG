#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)17;
signed char var_2 = (signed char)104;
int var_3 = 1623833951;
signed char var_6 = (signed char)126;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-63;
unsigned char var_9 = (unsigned char)172;
int var_10 = -313803004;
long long int var_12 = 2682305493154458681LL;
long long int var_13 = -5789597481980646807LL;
signed char var_14 = (signed char)-108;
unsigned short var_15 = (unsigned short)11945;
long long int var_18 = 5865306202010195272LL;
int zero = 0;
signed char var_19 = (signed char)50;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
short var_22 = (short)31488;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
