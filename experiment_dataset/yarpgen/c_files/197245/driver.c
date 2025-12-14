#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)110;
unsigned int var_4 = 270165252U;
unsigned int var_5 = 2695200856U;
short var_6 = (short)10104;
unsigned long long int var_10 = 4535810781965635372ULL;
signed char var_11 = (signed char)82;
int zero = 0;
long long int var_13 = 8370141446862565293LL;
short var_14 = (short)15637;
signed char var_15 = (signed char)-25;
void init() {
}

void checksum() {
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
