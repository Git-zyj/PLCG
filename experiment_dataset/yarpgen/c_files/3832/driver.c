#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-112;
unsigned char var_1 = (unsigned char)234;
long long int var_2 = 2736528738916014884LL;
unsigned short var_8 = (unsigned short)22253;
unsigned short var_9 = (unsigned short)228;
int var_10 = -518455245;
int var_13 = -1584502157;
int zero = 0;
int var_15 = -481478927;
long long int var_16 = -4317376803215602635LL;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-39;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
