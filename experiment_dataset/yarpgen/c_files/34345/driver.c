#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57733;
long long int var_2 = 4470611642795321406LL;
unsigned short var_3 = (unsigned short)34029;
unsigned short var_7 = (unsigned short)10500;
int var_9 = 274248693;
int var_11 = 1056408162;
_Bool var_12 = (_Bool)0;
long long int var_14 = -8128770220368098621LL;
int var_16 = -409824193;
int zero = 0;
unsigned short var_18 = (unsigned short)21816;
unsigned int var_19 = 3090897192U;
signed char var_20 = (signed char)-99;
_Bool var_21 = (_Bool)0;
long long int var_22 = -8975417710211745297LL;
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
