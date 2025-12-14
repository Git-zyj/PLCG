#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)64503;
int var_3 = -1534288353;
unsigned int var_5 = 2577248080U;
unsigned long long int var_6 = 3093362269463605518ULL;
long long int var_12 = 8062334515256417615LL;
int zero = 0;
unsigned long long int var_14 = 7321959179711451674ULL;
unsigned int var_15 = 2661555819U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
