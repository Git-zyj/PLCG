#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2614639500U;
unsigned int var_2 = 2180514557U;
short var_3 = (short)14942;
unsigned short var_7 = (unsigned short)40154;
unsigned int var_9 = 2004703793U;
unsigned long long int var_10 = 17160356299589149342ULL;
int zero = 0;
unsigned long long int var_15 = 10224392607632277510ULL;
unsigned short var_16 = (unsigned short)33358;
short var_17 = (short)402;
long long int var_18 = -1281414257685806886LL;
unsigned long long int var_19 = 594648565619299260ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
