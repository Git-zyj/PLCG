#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1910533650695284013ULL;
unsigned int var_1 = 4222131469U;
unsigned int var_3 = 2028938293U;
long long int var_7 = 892063996253605784LL;
unsigned char var_8 = (unsigned char)201;
unsigned long long int var_11 = 17304706046139814820ULL;
int var_13 = 610569683;
int zero = 0;
unsigned long long int var_14 = 4766981990056404010ULL;
unsigned long long int var_15 = 11157191869231779210ULL;
unsigned long long int var_16 = 11720867236353567823ULL;
int var_17 = -930117086;
long long int var_18 = 4967416982707511903LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
