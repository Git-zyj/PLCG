#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-67;
int var_2 = 2116101732;
short var_5 = (short)7900;
signed char var_6 = (signed char)-73;
unsigned short var_7 = (unsigned short)50445;
int var_11 = -993054040;
unsigned char var_12 = (unsigned char)161;
unsigned long long int var_15 = 9451363017215791005ULL;
int zero = 0;
signed char var_18 = (signed char)-76;
unsigned int var_19 = 478420382U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
