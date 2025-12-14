#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 9021082654069056963ULL;
unsigned char var_5 = (unsigned char)15;
short var_6 = (short)23944;
long long int var_9 = 1366820774043915416LL;
int zero = 0;
signed char var_19 = (signed char)-37;
unsigned char var_20 = (unsigned char)35;
unsigned short var_21 = (unsigned short)57196;
unsigned char var_22 = (unsigned char)62;
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
