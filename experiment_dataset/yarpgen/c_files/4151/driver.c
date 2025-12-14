#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5060583771938081234LL;
unsigned char var_5 = (unsigned char)126;
long long int var_7 = 6039345785790311718LL;
long long int var_8 = -1462698659859584986LL;
signed char var_9 = (signed char)110;
int var_11 = 18987372;
int zero = 0;
int var_17 = 407664859;
unsigned char var_18 = (unsigned char)72;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
