#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7069101636844589950LL;
unsigned char var_2 = (unsigned char)34;
unsigned char var_4 = (unsigned char)31;
unsigned char var_5 = (unsigned char)143;
long long int var_6 = 6949250416852934547LL;
unsigned short var_13 = (unsigned short)31326;
unsigned char var_15 = (unsigned char)132;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 4788971083782039784ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
