#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7660332782412133304LL;
signed char var_1 = (signed char)-106;
signed char var_3 = (signed char)1;
long long int var_5 = 206413412388743850LL;
signed char var_8 = (signed char)43;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)29557;
int zero = 0;
long long int var_15 = 1669752812367225946LL;
unsigned char var_16 = (unsigned char)221;
int var_17 = -1560995822;
int var_18 = -804600828;
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
