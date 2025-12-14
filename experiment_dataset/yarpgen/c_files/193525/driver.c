#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)9105;
long long int var_3 = -4510654563237043807LL;
int var_4 = -685704669;
unsigned short var_7 = (unsigned short)37892;
signed char var_9 = (signed char)-124;
unsigned short var_10 = (unsigned short)28785;
int var_13 = -1311176172;
long long int var_16 = 5152265722549178980LL;
unsigned short var_17 = (unsigned short)64363;
long long int var_18 = -5808884393393595363LL;
int zero = 0;
unsigned char var_19 = (unsigned char)100;
signed char var_20 = (signed char)-65;
long long int var_21 = 2656547684947330757LL;
_Bool var_22 = (_Bool)1;
long long int var_23 = -8146719562747184647LL;
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
