#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25931;
unsigned long long int var_4 = 8443839364892095920ULL;
unsigned short var_5 = (unsigned short)40681;
unsigned int var_6 = 903836409U;
unsigned long long int var_9 = 5716378229990915231ULL;
unsigned short var_12 = (unsigned short)9763;
unsigned long long int var_15 = 5874874387125138357ULL;
int zero = 0;
int var_17 = 1848311678;
unsigned short var_18 = (unsigned short)53552;
unsigned int var_19 = 3150055106U;
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
