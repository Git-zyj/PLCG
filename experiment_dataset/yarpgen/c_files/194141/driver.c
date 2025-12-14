#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8985987125810071640LL;
unsigned char var_2 = (unsigned char)140;
int var_8 = -1479159082;
long long int var_9 = -711065738905165339LL;
long long int var_14 = -6908653247176757751LL;
long long int var_15 = 1078593349893679882LL;
int zero = 0;
unsigned long long int var_16 = 9994378179452197377ULL;
unsigned long long int var_17 = 17724171366347771887ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
