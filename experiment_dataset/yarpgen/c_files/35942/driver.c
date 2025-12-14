#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-4184;
unsigned int var_2 = 1650355200U;
unsigned int var_4 = 2688777417U;
unsigned char var_6 = (unsigned char)117;
unsigned int var_8 = 517983161U;
int var_9 = 890658906;
unsigned short var_11 = (unsigned short)14388;
unsigned short var_12 = (unsigned short)27435;
long long int var_14 = 7626574536443930200LL;
unsigned short var_15 = (unsigned short)41067;
long long int var_16 = 3129781315027172952LL;
unsigned int var_17 = 3952389101U;
int zero = 0;
unsigned long long int var_18 = 2762549986419083860ULL;
short var_19 = (short)5412;
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
