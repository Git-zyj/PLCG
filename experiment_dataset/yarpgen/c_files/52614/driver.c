#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -360890627161900062LL;
unsigned long long int var_1 = 7873211546115291584ULL;
unsigned char var_3 = (unsigned char)177;
unsigned int var_4 = 2446344476U;
unsigned short var_9 = (unsigned short)20036;
long long int var_10 = -7759365728280757446LL;
unsigned int var_13 = 1302485801U;
int zero = 0;
unsigned long long int var_14 = 2836404268406675882ULL;
unsigned int var_15 = 2325096446U;
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
