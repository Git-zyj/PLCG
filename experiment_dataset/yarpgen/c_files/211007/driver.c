#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3301161588546501680LL;
unsigned long long int var_1 = 11876484207368123806ULL;
long long int var_6 = 8479133090078597114LL;
signed char var_11 = (signed char)116;
int zero = 0;
unsigned char var_14 = (unsigned char)121;
_Bool var_15 = (_Bool)1;
int var_16 = -1379945639;
unsigned char var_17 = (unsigned char)146;
unsigned long long int var_18 = 13765275231253388672ULL;
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
