#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1389595633;
unsigned short var_13 = (unsigned short)33792;
unsigned long long int var_14 = 6119260350704539841ULL;
long long int var_17 = 4472766708029287311LL;
long long int var_18 = -2276202548862620109LL;
int zero = 0;
int var_19 = 861678969;
unsigned char var_20 = (unsigned char)241;
signed char var_21 = (signed char)-26;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
