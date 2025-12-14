#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-25815;
long long int var_10 = 4868863300580561042LL;
int var_11 = 2041607900;
signed char var_12 = (signed char)-11;
long long int var_18 = 2324815094805263569LL;
int zero = 0;
short var_20 = (short)27528;
unsigned short var_21 = (unsigned short)34567;
unsigned short var_22 = (unsigned short)37394;
void init() {
}

void checksum() {
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
