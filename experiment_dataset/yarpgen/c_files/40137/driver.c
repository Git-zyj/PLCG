#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1553023048;
int var_1 = -810449436;
int var_4 = 1140805002;
int var_6 = 1570115717;
int var_10 = 12652890;
int var_11 = 977589768;
int var_14 = -58862927;
int var_17 = -278404468;
int zero = 0;
int var_19 = -89062786;
int var_20 = -772642416;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
