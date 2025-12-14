#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7502522895961562882LL;
unsigned short var_6 = (unsigned short)7035;
int var_8 = -956320973;
unsigned short var_10 = (unsigned short)29081;
unsigned int var_14 = 2481691767U;
int zero = 0;
unsigned short var_16 = (unsigned short)22188;
long long int var_17 = 5225544864643248849LL;
unsigned long long int var_18 = 8085160006139699989ULL;
long long int var_19 = -7721153912108115730LL;
void init() {
}

void checksum() {
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
