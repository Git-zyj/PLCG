#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11071;
unsigned long long int var_3 = 8155779307616295729ULL;
unsigned long long int var_7 = 4456671296629174949ULL;
unsigned short var_9 = (unsigned short)17220;
unsigned long long int var_12 = 12120253911304050822ULL;
int zero = 0;
short var_13 = (short)-23267;
int var_14 = -1288216896;
unsigned short var_15 = (unsigned short)19300;
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
