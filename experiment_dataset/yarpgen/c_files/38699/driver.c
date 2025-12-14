#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)106;
unsigned long long int var_9 = 5905394906032978529ULL;
long long int var_10 = -2870112871402888469LL;
signed char var_11 = (signed char)-21;
long long int var_12 = -8221708965461320166LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_18 = -1261696229;
unsigned long long int var_19 = 10253440023597898233ULL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
