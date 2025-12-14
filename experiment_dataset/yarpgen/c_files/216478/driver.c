#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10728;
signed char var_1 = (signed char)72;
unsigned long long int var_2 = 9685919948452761510ULL;
unsigned long long int var_3 = 11835042799003943115ULL;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)5283;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-20;
_Bool var_13 = (_Bool)1;
unsigned long long int var_16 = 5205442959342533991ULL;
int zero = 0;
long long int var_17 = -7988474930165678545LL;
signed char var_18 = (signed char)72;
signed char var_19 = (signed char)-90;
short var_20 = (short)15385;
short var_21 = (short)-4938;
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
