#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13242984254129274067ULL;
short var_4 = (short)12959;
unsigned long long int var_5 = 17240363801030462777ULL;
_Bool var_6 = (_Bool)1;
long long int var_9 = -3777953814296235342LL;
signed char var_10 = (signed char)-30;
unsigned short var_11 = (unsigned short)45467;
unsigned long long int var_12 = 3970814521758877568ULL;
_Bool var_13 = (_Bool)0;
long long int var_14 = -5574376216471705289LL;
int zero = 0;
unsigned short var_19 = (unsigned short)43886;
long long int var_20 = 2263504029060613528LL;
unsigned char var_21 = (unsigned char)228;
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
