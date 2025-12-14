#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24119;
unsigned short var_1 = (unsigned short)59670;
unsigned short var_3 = (unsigned short)13916;
unsigned short var_4 = (unsigned short)45487;
unsigned short var_5 = (unsigned short)61772;
int var_7 = -1615690867;
int var_9 = -1803787482;
int var_11 = 1152339856;
int zero = 0;
unsigned char var_13 = (unsigned char)23;
short var_14 = (short)26253;
void init() {
}

void checksum() {
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
