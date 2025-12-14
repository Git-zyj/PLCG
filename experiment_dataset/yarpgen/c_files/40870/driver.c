#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 158300288359914395ULL;
unsigned long long int var_4 = 16707120955622430286ULL;
unsigned char var_5 = (unsigned char)213;
unsigned long long int var_10 = 18081083517732739658ULL;
unsigned short var_11 = (unsigned short)15209;
int zero = 0;
unsigned long long int var_17 = 9112091311513378732ULL;
unsigned long long int var_18 = 5685913811172339097ULL;
int var_19 = 536568594;
unsigned short var_20 = (unsigned short)60854;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
