#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2630474338703859172LL;
long long int var_2 = -6754990617740075631LL;
unsigned int var_5 = 501199537U;
unsigned short var_7 = (unsigned short)52949;
unsigned short var_8 = (unsigned short)28163;
unsigned long long int var_9 = 9608250966309522769ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)129;
unsigned long long int var_13 = 14472589204522289331ULL;
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
