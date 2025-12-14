#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2183315770964939894LL;
int var_1 = 1007723571;
unsigned long long int var_2 = 4479840742111697022ULL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 7639253011306477042ULL;
unsigned long long int var_8 = 5336796128254292671ULL;
unsigned long long int var_9 = 7165507080595027294ULL;
unsigned long long int var_11 = 10468135955556673513ULL;
unsigned long long int var_12 = 15972658329784055554ULL;
int zero = 0;
signed char var_16 = (signed char)38;
unsigned long long int var_17 = 11926747882899153499ULL;
unsigned long long int var_18 = 13685216898066481002ULL;
unsigned long long int var_19 = 16240905274559265549ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
