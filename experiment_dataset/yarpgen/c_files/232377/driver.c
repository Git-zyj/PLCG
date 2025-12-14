#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 9203806864871834543LL;
unsigned long long int var_4 = 14831479312236859790ULL;
short var_5 = (short)18326;
long long int var_9 = 802520923527392327LL;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned long long int var_13 = 6901185290074609104ULL;
int var_14 = -1073229282;
int zero = 0;
short var_17 = (short)13040;
int var_18 = -225793843;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
