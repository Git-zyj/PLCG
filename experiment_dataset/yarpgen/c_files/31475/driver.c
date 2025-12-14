#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 357904226U;
short var_1 = (short)9810;
unsigned long long int var_2 = 2973283802819536194ULL;
signed char var_3 = (signed char)-124;
short var_5 = (short)16964;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 79393096U;
unsigned long long int var_11 = 4942372763517236530ULL;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 5822527070422276726ULL;
long long int var_15 = 6261547290535541619LL;
int var_16 = -1763612238;
unsigned char var_17 = (unsigned char)67;
_Bool var_18 = (_Bool)1;
int zero = 0;
short var_19 = (short)22504;
unsigned char var_20 = (unsigned char)18;
unsigned char var_21 = (unsigned char)203;
int var_22 = 1536431477;
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
