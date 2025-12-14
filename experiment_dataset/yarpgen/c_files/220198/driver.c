#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-16;
long long int var_1 = -2595084692389603447LL;
short var_2 = (short)-26650;
unsigned long long int var_4 = 11570163008322344912ULL;
short var_6 = (short)-8143;
unsigned char var_7 = (unsigned char)24;
unsigned long long int var_8 = 1270711748229032821ULL;
int zero = 0;
unsigned long long int var_12 = 5461678075739878057ULL;
unsigned char var_13 = (unsigned char)78;
long long int var_14 = -5149310738475560007LL;
unsigned long long int var_15 = 17774432320694600540ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
