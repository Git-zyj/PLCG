#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1889556343344768664LL;
short var_1 = (short)-30161;
unsigned short var_2 = (unsigned short)53043;
long long int var_3 = 4450961800335088478LL;
long long int var_5 = -1461303825158966577LL;
signed char var_7 = (signed char)106;
long long int var_8 = -4670468191877974003LL;
unsigned short var_9 = (unsigned short)61920;
unsigned long long int var_11 = 5835306821081285354ULL;
int zero = 0;
signed char var_13 = (signed char)-57;
signed char var_14 = (signed char)-95;
int var_15 = 1835505608;
unsigned int var_16 = 2140522008U;
unsigned char var_17 = (unsigned char)103;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
