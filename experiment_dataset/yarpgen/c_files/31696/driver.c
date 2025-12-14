#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1909849216;
unsigned short var_1 = (unsigned short)38310;
signed char var_4 = (signed char)40;
unsigned int var_8 = 2687909879U;
long long int var_10 = -6976580705346686333LL;
unsigned long long int var_13 = 5044978670247216398ULL;
int zero = 0;
long long int var_17 = -1501630830003005861LL;
long long int var_18 = -5513983893306774993LL;
signed char var_19 = (signed char)-9;
unsigned char var_20 = (unsigned char)75;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
