#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7905610933907733939LL;
int var_2 = -1903879468;
_Bool var_3 = (_Bool)0;
long long int var_8 = -134332022561365865LL;
unsigned short var_9 = (unsigned short)55171;
_Bool var_11 = (_Bool)1;
int var_13 = 1160151851;
int zero = 0;
int var_15 = -1327978112;
signed char var_16 = (signed char)-6;
signed char var_17 = (signed char)30;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
