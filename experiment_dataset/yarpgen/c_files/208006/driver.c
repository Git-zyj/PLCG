#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1606918967649802353ULL;
signed char var_1 = (signed char)40;
unsigned char var_2 = (unsigned char)162;
long long int var_3 = -4085563094353464206LL;
_Bool var_5 = (_Bool)0;
short var_7 = (short)29325;
unsigned short var_9 = (unsigned short)40188;
int zero = 0;
long long int var_10 = -6278464581744990385LL;
unsigned int var_11 = 1016067637U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
