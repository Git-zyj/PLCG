#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1689043011;
unsigned long long int var_5 = 764742373737569293ULL;
unsigned int var_7 = 2289272520U;
unsigned long long int var_9 = 7984435842980503681ULL;
long long int var_11 = -927818922918604478LL;
unsigned char var_13 = (unsigned char)221;
int zero = 0;
long long int var_14 = 7405684929056162143LL;
short var_15 = (short)-5369;
unsigned int var_16 = 1920464503U;
int var_17 = -1074859572;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
