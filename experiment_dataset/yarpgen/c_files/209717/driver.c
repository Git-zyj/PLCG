#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60024;
signed char var_1 = (signed char)-33;
unsigned int var_4 = 3839499839U;
signed char var_5 = (signed char)-28;
short var_8 = (short)26626;
long long int var_10 = 6365426227387027802LL;
int zero = 0;
unsigned long long int var_18 = 16057772013980388140ULL;
long long int var_19 = 7178708980455870287LL;
signed char var_20 = (signed char)-67;
long long int var_21 = 6753370071107063585LL;
int var_22 = -440812928;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
