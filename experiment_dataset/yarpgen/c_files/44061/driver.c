#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6468;
short var_1 = (short)21651;
int var_2 = -1846651695;
unsigned long long int var_3 = 18027652921835764896ULL;
long long int var_4 = -6103123365196737416LL;
unsigned long long int var_5 = 5890672479378776304ULL;
signed char var_6 = (signed char)80;
unsigned long long int var_7 = 993205253108325446ULL;
signed char var_9 = (signed char)121;
int zero = 0;
unsigned char var_11 = (unsigned char)229;
unsigned char var_12 = (unsigned char)24;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
