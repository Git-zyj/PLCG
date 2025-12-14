#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-25;
signed char var_1 = (signed char)-50;
int var_2 = 1222516348;
unsigned char var_5 = (unsigned char)215;
long long int var_8 = 8455822320618727009LL;
int var_11 = -1759842084;
unsigned long long int var_12 = 7364470226560819225ULL;
unsigned int var_13 = 456320988U;
_Bool var_15 = (_Bool)0;
signed char var_17 = (signed char)111;
int zero = 0;
unsigned int var_18 = 919843717U;
_Bool var_19 = (_Bool)0;
short var_20 = (short)29432;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
