#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 14543502071663861514ULL;
_Bool var_9 = (_Bool)0;
int var_10 = 1419067454;
long long int var_11 = 8952457200576224689LL;
unsigned long long int var_14 = 3521724080077232406ULL;
long long int var_17 = -816762789340098985LL;
int zero = 0;
int var_20 = 972947948;
signed char var_21 = (signed char)-60;
unsigned short var_22 = (unsigned short)47245;
unsigned long long int var_23 = 9448307768003835357ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
