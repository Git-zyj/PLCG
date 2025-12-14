#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)164;
unsigned short var_5 = (unsigned short)9374;
unsigned long long int var_6 = 16581222373986393026ULL;
short var_10 = (short)-10114;
int zero = 0;
unsigned long long int var_12 = 2825962760767212815ULL;
unsigned int var_13 = 2487314493U;
unsigned short var_14 = (unsigned short)27995;
int var_15 = 821253309;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
