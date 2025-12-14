#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8596847048017139582LL;
unsigned int var_2 = 3394271263U;
int var_4 = -1607032253;
unsigned short var_5 = (unsigned short)36604;
long long int var_6 = -6428986842975978001LL;
unsigned long long int var_7 = 1484608375132617316ULL;
signed char var_9 = (signed char)-114;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 1282197362U;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)41476;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
