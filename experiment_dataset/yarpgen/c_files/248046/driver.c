#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-49;
int var_7 = 1240099843;
unsigned char var_8 = (unsigned char)133;
short var_9 = (short)-4794;
int zero = 0;
signed char var_12 = (signed char)43;
unsigned char var_13 = (unsigned char)116;
signed char var_14 = (signed char)-67;
unsigned long long int var_15 = 9590245665453527665ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
