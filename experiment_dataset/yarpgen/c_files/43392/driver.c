#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19358;
_Bool var_2 = (_Bool)0;
int var_4 = -1541488505;
unsigned long long int var_6 = 1018233646657860827ULL;
unsigned long long int var_8 = 12203324928939587613ULL;
signed char var_9 = (signed char)-43;
int zero = 0;
short var_10 = (short)-31020;
short var_11 = (short)8358;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
