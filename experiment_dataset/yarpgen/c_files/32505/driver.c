#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)27;
unsigned long long int var_6 = 15402820890296868437ULL;
unsigned char var_8 = (unsigned char)28;
long long int var_9 = 4203924008194178803LL;
long long int var_11 = -8122891332368551018LL;
unsigned long long int var_13 = 2901409670649134867ULL;
long long int var_15 = 2545092157013112658LL;
unsigned char var_16 = (unsigned char)220;
short var_18 = (short)-21217;
int zero = 0;
unsigned short var_19 = (unsigned short)51623;
unsigned long long int var_20 = 6169432730181085725ULL;
unsigned long long int var_21 = 12521051562094571834ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
