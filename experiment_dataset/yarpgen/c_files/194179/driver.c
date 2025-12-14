#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1646892850944763045LL;
unsigned short var_7 = (unsigned short)2312;
unsigned char var_9 = (unsigned char)172;
long long int var_10 = 9213029502062308812LL;
long long int var_11 = -4406180542379912714LL;
int zero = 0;
long long int var_12 = 7238128543539449019LL;
long long int var_13 = -7021318520571567037LL;
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
