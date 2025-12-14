#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1247190538;
signed char var_1 = (signed char)6;
unsigned short var_2 = (unsigned short)64406;
int var_4 = 29566633;
long long int var_6 = -1635993275689154367LL;
unsigned int var_7 = 2243889074U;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 4272748910U;
unsigned long long int var_19 = 8930113334757185853ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
