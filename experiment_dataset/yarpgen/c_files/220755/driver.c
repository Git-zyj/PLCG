#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1488816546U;
short var_4 = (short)27923;
unsigned char var_5 = (unsigned char)44;
long long int var_9 = -8608326895117467786LL;
short var_13 = (short)-14169;
signed char var_17 = (signed char)-19;
int zero = 0;
int var_19 = -1337866108;
unsigned short var_20 = (unsigned short)29579;
unsigned short var_21 = (unsigned short)28619;
long long int var_22 = 2121955651701306008LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
