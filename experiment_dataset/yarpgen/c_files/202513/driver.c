#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5226;
unsigned int var_1 = 1241707012U;
unsigned int var_2 = 2559644725U;
int var_3 = -1746369934;
long long int var_5 = -2750244740987725942LL;
long long int var_6 = 8763391604063396582LL;
short var_7 = (short)17938;
unsigned int var_8 = 323358908U;
signed char var_9 = (signed char)-94;
long long int var_10 = 458433737853405466LL;
signed char var_11 = (signed char)124;
long long int var_12 = 7182252462011819583LL;
short var_13 = (short)30365;
signed char var_14 = (signed char)-19;
int zero = 0;
unsigned int var_17 = 2669842038U;
short var_18 = (short)17552;
short var_19 = (short)-12509;
unsigned int var_20 = 2095872837U;
long long int var_21 = -4421773644691351654LL;
long long int var_22 = -300527403432160547LL;
int var_23 = 1863292420;
long long int var_24 = 7496292688349373609LL;
unsigned int var_25 = 687559031U;
unsigned int var_26 = 663860159U;
int var_27 = -154958660;
unsigned int var_28 = 1059816284U;
int arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1184830795 : -952613876;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
