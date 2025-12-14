#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7995912847442758486LL;
unsigned int var_3 = 616325709U;
long long int var_4 = -7761997571425196214LL;
short var_5 = (short)-6263;
signed char var_9 = (signed char)57;
int zero = 0;
unsigned long long int var_11 = 15255082340155711160ULL;
long long int var_12 = 7500704851022652129LL;
unsigned int var_13 = 3261276509U;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
