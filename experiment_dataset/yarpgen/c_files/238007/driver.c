#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1728257806;
unsigned long long int var_3 = 16298051551993352651ULL;
unsigned char var_7 = (unsigned char)211;
signed char var_9 = (signed char)127;
unsigned char var_10 = (unsigned char)65;
long long int var_11 = 1337679100830736496LL;
long long int var_12 = 8851956197278569962LL;
unsigned long long int var_14 = 12858486634343049863ULL;
int zero = 0;
unsigned long long int var_16 = 17710909383587563192ULL;
_Bool var_17 = (_Bool)1;
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
