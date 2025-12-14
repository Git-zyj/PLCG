#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-80;
unsigned long long int var_2 = 16760849804620763562ULL;
short var_7 = (short)-6866;
unsigned char var_9 = (unsigned char)219;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)7894;
long long int var_18 = 815795170740453090LL;
unsigned long long int var_19 = 1622767179358423230ULL;
unsigned long long int var_20 = 5291192040433010520ULL;
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
