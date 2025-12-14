#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4556648339029367404ULL;
unsigned char var_5 = (unsigned char)133;
short var_10 = (short)-30272;
long long int var_12 = -799911731127743947LL;
long long int var_13 = -7484688951397621304LL;
int zero = 0;
long long int var_15 = 8206417126286493486LL;
signed char var_16 = (signed char)-13;
void init() {
}

void checksum() {
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
