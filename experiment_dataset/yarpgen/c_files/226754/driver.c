#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 898317848152813555LL;
unsigned long long int var_1 = 18029543938367329231ULL;
unsigned long long int var_7 = 14298512529155358938ULL;
unsigned short var_8 = (unsigned short)23678;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_14 = (unsigned short)21489;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)86;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
