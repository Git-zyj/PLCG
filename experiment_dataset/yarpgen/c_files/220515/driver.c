#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)215;
long long int var_3 = -5332854384921573110LL;
signed char var_6 = (signed char)-79;
long long int var_7 = -7402192070246021465LL;
int zero = 0;
unsigned short var_11 = (unsigned short)59994;
unsigned short var_12 = (unsigned short)4287;
unsigned char var_13 = (unsigned char)177;
int var_14 = -49587913;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
