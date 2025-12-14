#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-121;
unsigned int var_2 = 3928116546U;
unsigned long long int var_5 = 17950625791881046740ULL;
int var_6 = -1685317253;
unsigned long long int var_9 = 16642044227698446102ULL;
signed char var_10 = (signed char)-44;
int zero = 0;
signed char var_12 = (signed char)127;
signed char var_13 = (signed char)96;
int var_14 = 398590776;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
