#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1234872296;
signed char var_1 = (signed char)-25;
short var_6 = (short)-24781;
long long int var_7 = 4445212231867195975LL;
unsigned long long int var_8 = 9336882256468667207ULL;
long long int var_9 = -8167720904581646470LL;
int zero = 0;
signed char var_10 = (signed char)-65;
unsigned long long int var_11 = 15851320829673882126ULL;
long long int var_12 = -3964293284769411837LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
