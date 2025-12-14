#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_3 = 7493861522103048476LL;
long long int var_4 = 1423647214899906432LL;
long long int var_7 = -8081679713340515780LL;
_Bool var_11 = (_Bool)0;
long long int var_12 = -8784559300990048493LL;
unsigned long long int var_13 = 7601861345178585715ULL;
unsigned long long int var_15 = 16780221647582184468ULL;
long long int var_16 = -88166076267353420LL;
short var_17 = (short)11758;
int zero = 0;
unsigned long long int var_19 = 17129605912308799912ULL;
long long int var_20 = -7939147940256625295LL;
long long int var_21 = -6619697820472736185LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
