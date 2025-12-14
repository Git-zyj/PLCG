#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9809725702696411394ULL;
unsigned short var_5 = (unsigned short)19635;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)238;
long long int var_13 = 6389893199038014194LL;
signed char var_14 = (signed char)61;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 2078523822U;
unsigned short var_20 = (unsigned short)8031;
signed char var_21 = (signed char)-122;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
