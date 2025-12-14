#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11875733714169104211ULL;
unsigned long long int var_2 = 10422287696181152680ULL;
unsigned long long int var_3 = 10683750889099900472ULL;
short var_13 = (short)26394;
unsigned short var_14 = (unsigned short)64802;
unsigned long long int var_15 = 3110818738840453986ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)41100;
unsigned long long int var_19 = 8854809094228464077ULL;
unsigned short var_20 = (unsigned short)62922;
short var_21 = (short)14617;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
