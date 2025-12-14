#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9587807349395866544ULL;
unsigned short var_3 = (unsigned short)43490;
unsigned short var_5 = (unsigned short)34869;
unsigned short var_8 = (unsigned short)32793;
signed char var_10 = (signed char)118;
unsigned short var_11 = (unsigned short)40622;
signed char var_12 = (signed char)112;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 15871433574902215717ULL;
short var_19 = (short)-11554;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)49092;
unsigned long long int var_22 = 16055826491693967933ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
