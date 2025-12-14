#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -952716903126816982LL;
unsigned short var_2 = (unsigned short)64066;
unsigned long long int var_4 = 7485823647937272903ULL;
unsigned char var_5 = (unsigned char)72;
long long int var_8 = 5172989442465623036LL;
unsigned short var_11 = (unsigned short)38030;
int var_12 = 1603206332;
unsigned int var_13 = 427550169U;
int zero = 0;
unsigned short var_14 = (unsigned short)4208;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
