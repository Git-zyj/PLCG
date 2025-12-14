#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)112;
long long int var_1 = -2497946009214140574LL;
unsigned short var_2 = (unsigned short)27332;
signed char var_3 = (signed char)41;
unsigned short var_4 = (unsigned short)54538;
unsigned int var_5 = 1920228546U;
unsigned int var_6 = 3807010680U;
unsigned short var_7 = (unsigned short)62912;
unsigned int var_8 = 24902610U;
long long int var_10 = 7999017403958715362LL;
long long int var_11 = -3208619254724584601LL;
unsigned int var_12 = 4094657024U;
int zero = 0;
unsigned int var_14 = 307514290U;
signed char var_15 = (signed char)97;
unsigned short var_16 = (unsigned short)43274;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
