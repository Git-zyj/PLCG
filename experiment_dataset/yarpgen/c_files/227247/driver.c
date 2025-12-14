#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3785267620U;
long long int var_3 = -6388741935554914305LL;
_Bool var_5 = (_Bool)1;
long long int var_6 = 1744717081954106111LL;
unsigned long long int var_7 = 521321529506250697ULL;
unsigned int var_8 = 4208339060U;
signed char var_9 = (signed char)-66;
signed char var_10 = (signed char)96;
int zero = 0;
short var_11 = (short)-29238;
unsigned char var_12 = (unsigned char)219;
signed char var_13 = (signed char)-104;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
