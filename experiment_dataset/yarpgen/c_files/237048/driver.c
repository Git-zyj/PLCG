#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 427281400196413696LL;
signed char var_1 = (signed char)-110;
signed char var_4 = (signed char)-119;
unsigned long long int var_7 = 4437200943955207547ULL;
long long int var_8 = -6437710598307688002LL;
unsigned short var_10 = (unsigned short)49180;
int var_13 = -257441395;
int zero = 0;
unsigned int var_17 = 2598581457U;
short var_18 = (short)22923;
unsigned long long int var_19 = 1909211797847166349ULL;
long long int var_20 = -6613001355691981095LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
