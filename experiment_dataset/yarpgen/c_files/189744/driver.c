#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)74;
unsigned int var_3 = 1091554356U;
unsigned short var_4 = (unsigned short)18796;
unsigned long long int var_5 = 7396557590363994938ULL;
_Bool var_6 = (_Bool)0;
unsigned int var_9 = 1509901945U;
long long int var_11 = 3419458432267301358LL;
unsigned int var_12 = 1416446956U;
signed char var_13 = (signed char)102;
unsigned int var_14 = 3986324273U;
unsigned short var_16 = (unsigned short)7297;
int zero = 0;
int var_17 = 1610042095;
long long int var_18 = -4040813065420072396LL;
long long int var_19 = -69335776205650119LL;
unsigned char var_20 = (unsigned char)21;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
