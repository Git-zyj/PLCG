#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)103;
signed char var_2 = (signed char)-53;
unsigned char var_3 = (unsigned char)92;
long long int var_8 = -7060605588397551480LL;
long long int var_9 = 5536363152369230214LL;
long long int var_15 = 1817182450510883424LL;
int zero = 0;
unsigned char var_16 = (unsigned char)124;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)28;
void init() {
}

void checksum() {
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
