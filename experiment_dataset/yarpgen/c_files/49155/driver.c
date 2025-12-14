#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)188;
long long int var_6 = 7159150296368534233LL;
unsigned char var_9 = (unsigned char)238;
_Bool var_10 = (_Bool)1;
int var_16 = 511421873;
int zero = 0;
unsigned long long int var_17 = 6376943989887795580ULL;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)11182;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
