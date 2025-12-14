#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)27150;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-110;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)-77;
unsigned short var_10 = (unsigned short)9098;
_Bool var_11 = (_Bool)1;
long long int var_14 = 5301352031050476136LL;
unsigned char var_17 = (unsigned char)240;
int zero = 0;
unsigned char var_18 = (unsigned char)94;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
