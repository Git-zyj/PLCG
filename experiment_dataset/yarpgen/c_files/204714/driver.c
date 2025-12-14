#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6347562910655018878LL;
unsigned int var_3 = 154884772U;
unsigned int var_6 = 260505793U;
unsigned char var_8 = (unsigned char)170;
short var_9 = (short)-4736;
unsigned long long int var_10 = 4951491564714881736ULL;
int zero = 0;
signed char var_12 = (signed char)-55;
unsigned short var_13 = (unsigned short)57452;
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
