#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)61;
unsigned long long int var_2 = 15594112812482586125ULL;
long long int var_3 = -823663488096923430LL;
int var_6 = -518014655;
unsigned int var_7 = 2967977474U;
unsigned long long int var_9 = 6551110707679727238ULL;
int var_11 = 1902144366;
int zero = 0;
unsigned short var_12 = (unsigned short)61508;
unsigned long long int var_13 = 3918993922177975181ULL;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2254455236U;
unsigned char var_16 = (unsigned char)26;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
