#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8438810776201104310LL;
int var_2 = 138879003;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
long long int var_5 = 5451655780539889226LL;
unsigned int var_6 = 2222697529U;
unsigned char var_8 = (unsigned char)197;
long long int var_9 = -3763610531587864479LL;
unsigned char var_10 = (unsigned char)220;
long long int var_11 = 1195796320870671244LL;
unsigned int var_12 = 559065700U;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = -1054629122;
_Bool var_15 = (_Bool)0;
long long int var_16 = -2246846773798194478LL;
unsigned char var_17 = (unsigned char)109;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
