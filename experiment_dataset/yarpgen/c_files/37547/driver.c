#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14155206633026189169ULL;
unsigned int var_1 = 1630336671U;
short var_2 = (short)-9846;
int var_5 = 1589563614;
unsigned long long int var_7 = 6368391272814428482ULL;
unsigned long long int var_9 = 3294171921946560275ULL;
long long int var_12 = 8598804382365386799LL;
int zero = 0;
unsigned short var_13 = (unsigned short)21384;
unsigned char var_14 = (unsigned char)79;
unsigned long long int var_15 = 6996828980010567380ULL;
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
