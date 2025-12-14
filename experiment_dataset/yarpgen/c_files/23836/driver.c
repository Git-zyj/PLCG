#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25144;
long long int var_6 = 7870512528545088133LL;
int var_8 = -37563569;
unsigned long long int var_11 = 12752146696624744683ULL;
long long int var_12 = 6041441631485969797LL;
long long int var_15 = 8714239798544698672LL;
unsigned long long int var_16 = 8133029297644828914ULL;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)98;
unsigned long long int var_19 = 5740704126316553888ULL;
void init() {
}

void checksum() {
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
