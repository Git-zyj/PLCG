#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2776634996U;
signed char var_4 = (signed char)-54;
short var_6 = (short)-9666;
long long int var_7 = -671486316014189404LL;
int var_8 = 835441725;
unsigned char var_10 = (unsigned char)94;
unsigned int var_11 = 2973163045U;
signed char var_13 = (signed char)-19;
signed char var_14 = (signed char)-69;
unsigned int var_15 = 3853586218U;
unsigned char var_18 = (unsigned char)31;
int zero = 0;
short var_19 = (short)25657;
signed char var_20 = (signed char)86;
long long int var_21 = -1482368808314025045LL;
short var_22 = (short)-10626;
_Bool var_23 = (_Bool)1;
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
