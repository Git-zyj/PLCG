#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4917;
long long int var_1 = 8556157508864260906LL;
long long int var_2 = -9208094700792331088LL;
unsigned short var_4 = (unsigned short)8804;
unsigned long long int var_5 = 7404271292196077548ULL;
signed char var_6 = (signed char)110;
unsigned int var_7 = 3767362856U;
int var_8 = 1360022394;
unsigned int var_10 = 1023168397U;
int zero = 0;
int var_11 = 2127974042;
unsigned int var_12 = 880659018U;
unsigned int var_13 = 559756424U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
