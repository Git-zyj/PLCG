#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)254;
signed char var_4 = (signed char)-69;
long long int var_7 = 3029713432048246020LL;
unsigned short var_10 = (unsigned short)25305;
int var_12 = 1267008361;
int zero = 0;
int var_14 = -1812976036;
unsigned long long int var_15 = 17709258077769379356ULL;
long long int var_16 = -4229803017156657228LL;
signed char var_17 = (signed char)125;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
