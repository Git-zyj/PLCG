#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16865015009943029523ULL;
long long int var_3 = 2247379185871637674LL;
long long int var_5 = -1168343255020287212LL;
unsigned short var_6 = (unsigned short)54682;
unsigned short var_9 = (unsigned short)57868;
int zero = 0;
long long int var_11 = 770392682394807770LL;
long long int var_12 = -1452760563120263850LL;
long long int var_13 = 6482110022391962810LL;
unsigned long long int var_14 = 10019539989078431177ULL;
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
