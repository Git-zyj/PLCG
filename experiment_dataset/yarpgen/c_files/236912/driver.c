#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28300;
unsigned short var_5 = (unsigned short)49862;
int var_7 = -153960040;
unsigned int var_9 = 578637564U;
unsigned long long int var_10 = 8661481958858410201ULL;
long long int var_13 = 7415399755467948248LL;
int zero = 0;
unsigned long long int var_17 = 14561717141114390396ULL;
unsigned long long int var_18 = 16458963556501656241ULL;
void init() {
}

void checksum() {
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
