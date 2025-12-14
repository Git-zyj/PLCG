#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6945841066963578427LL;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 2327744606U;
unsigned int var_4 = 1039055457U;
unsigned int var_6 = 811125876U;
unsigned int var_8 = 1588859881U;
long long int var_9 = -994430732486430416LL;
long long int var_11 = 7837866951907168631LL;
short var_12 = (short)-1827;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 12582814639572041008ULL;
unsigned int var_19 = 2191594238U;
int var_20 = 1330598666;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
