#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-50;
unsigned long long int var_2 = 10195453223205703675ULL;
unsigned short var_4 = (unsigned short)50121;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 3210194419U;
unsigned int var_11 = 1797818708U;
int zero = 0;
unsigned char var_14 = (unsigned char)151;
unsigned short var_15 = (unsigned short)25487;
unsigned long long int var_16 = 1089714691127048950ULL;
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
