#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)153;
_Bool var_1 = (_Bool)0;
long long int var_2 = -6744463236381307186LL;
_Bool var_3 = (_Bool)1;
long long int var_4 = 778209588434982168LL;
unsigned short var_5 = (unsigned short)1429;
signed char var_6 = (signed char)-41;
unsigned char var_7 = (unsigned char)191;
signed char var_8 = (signed char)-74;
long long int var_9 = -6213389551184945355LL;
long long int var_11 = 7393402213068828354LL;
long long int var_17 = -4915003521822698421LL;
unsigned int var_18 = 1913829015U;
int zero = 0;
long long int var_19 = -4827370715561220707LL;
unsigned int var_20 = 697313304U;
unsigned char var_21 = (unsigned char)38;
void init() {
}

void checksum() {
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
