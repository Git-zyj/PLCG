#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)132;
unsigned short var_1 = (unsigned short)31565;
short var_2 = (short)-1222;
unsigned long long int var_4 = 1750440542526049870ULL;
unsigned long long int var_5 = 12993372102750724220ULL;
unsigned short var_6 = (unsigned short)11695;
unsigned char var_8 = (unsigned char)126;
unsigned long long int var_9 = 1557875691993413721ULL;
int zero = 0;
short var_10 = (short)-4688;
unsigned short var_11 = (unsigned short)32967;
unsigned int var_12 = 2577710161U;
unsigned char var_13 = (unsigned char)241;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
