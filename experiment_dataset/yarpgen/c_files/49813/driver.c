#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4497397725903770646LL;
signed char var_3 = (signed char)104;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 883854185U;
long long int var_6 = -1183451995908699195LL;
signed char var_9 = (signed char)-52;
long long int var_10 = -4102319687140604029LL;
int zero = 0;
signed char var_12 = (signed char)-61;
int var_13 = 653709141;
long long int var_14 = 8459406550366119007LL;
void init() {
}

void checksum() {
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
