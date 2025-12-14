#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 4048216318U;
int var_3 = 2094012491;
unsigned char var_5 = (unsigned char)21;
unsigned short var_15 = (unsigned short)5143;
int zero = 0;
unsigned long long int var_17 = 9863215350627358242ULL;
unsigned long long int var_18 = 14426873645138601396ULL;
_Bool var_19 = (_Bool)0;
long long int var_20 = 3342288426971910746LL;
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
