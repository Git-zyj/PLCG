#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3461566349U;
long long int var_4 = -3085918939382369480LL;
unsigned char var_8 = (unsigned char)162;
long long int var_9 = -1665024896989322889LL;
unsigned short var_10 = (unsigned short)19152;
int zero = 0;
unsigned short var_12 = (unsigned short)65383;
unsigned short var_13 = (unsigned short)64858;
signed char var_14 = (signed char)105;
void init() {
}

void checksum() {
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
