#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18341;
unsigned short var_2 = (unsigned short)17622;
unsigned long long int var_4 = 6679744447099257373ULL;
short var_5 = (short)29225;
short var_7 = (short)25075;
unsigned char var_8 = (unsigned char)121;
int zero = 0;
short var_10 = (short)-31951;
unsigned long long int var_11 = 15632448017463903741ULL;
signed char var_12 = (signed char)79;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
