#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-22;
short var_8 = (short)25637;
signed char var_15 = (signed char)98;
int zero = 0;
unsigned char var_20 = (unsigned char)78;
signed char var_21 = (signed char)-120;
short var_22 = (short)17815;
long long int var_23 = 8516794810921353462LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
