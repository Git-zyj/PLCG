#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26021;
long long int var_1 = -8717496997107700269LL;
unsigned short var_2 = (unsigned short)7770;
unsigned long long int var_3 = 3139911626853442866ULL;
unsigned int var_4 = 3046650973U;
unsigned short var_6 = (unsigned short)52941;
unsigned int var_8 = 3182529031U;
unsigned char var_9 = (unsigned char)45;
int zero = 0;
unsigned int var_10 = 1308314379U;
unsigned int var_11 = 2186383261U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
