#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-2146;
long long int var_8 = -7334438290279559593LL;
int var_9 = 225536070;
int var_11 = -2053102782;
signed char var_13 = (signed char)-74;
unsigned char var_14 = (unsigned char)21;
short var_15 = (short)-17187;
int zero = 0;
long long int var_17 = 2976797975455784037LL;
int var_18 = -1167362639;
unsigned char var_19 = (unsigned char)98;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
