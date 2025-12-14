#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28687;
unsigned char var_1 = (unsigned char)206;
unsigned char var_4 = (unsigned char)193;
short var_5 = (short)27702;
unsigned int var_7 = 66834454U;
unsigned int var_9 = 2489340812U;
unsigned int var_10 = 2855183075U;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-5930;
int zero = 0;
short var_14 = (short)18737;
unsigned long long int var_15 = 9200453437365825444ULL;
unsigned long long int var_16 = 5071594467248622428ULL;
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
