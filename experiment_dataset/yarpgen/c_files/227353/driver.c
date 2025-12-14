#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)127;
unsigned int var_1 = 3107955418U;
long long int var_2 = -6336909150726866399LL;
unsigned char var_3 = (unsigned char)98;
unsigned int var_4 = 1279785999U;
int var_5 = 1192646643;
signed char var_6 = (signed char)-1;
unsigned short var_7 = (unsigned short)65472;
int var_8 = -1742632206;
unsigned int var_9 = 6021560U;
int var_10 = 2068358359;
unsigned long long int var_11 = 8558967645635052416ULL;
int zero = 0;
int var_12 = 1655566572;
int var_13 = 1216467943;
signed char var_14 = (signed char)-25;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
