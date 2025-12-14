#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)37478;
unsigned char var_8 = (unsigned char)136;
unsigned short var_9 = (unsigned short)52740;
int zero = 0;
unsigned short var_12 = (unsigned short)62926;
long long int var_13 = 5411956257706910857LL;
void init() {
}

void checksum() {
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
