#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 4290819929U;
signed char var_3 = (signed char)-36;
unsigned long long int var_9 = 7620706200918958087ULL;
long long int var_13 = -3415944661187329402LL;
unsigned long long int var_15 = 15866806686065568445ULL;
int zero = 0;
int var_19 = -1317768069;
unsigned short var_20 = (unsigned short)41806;
void init() {
}

void checksum() {
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
