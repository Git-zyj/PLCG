#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27830;
unsigned int var_2 = 1984130674U;
short var_3 = (short)21064;
signed char var_7 = (signed char)-110;
signed char var_8 = (signed char)-99;
unsigned long long int var_9 = 15399026934607334348ULL;
int zero = 0;
short var_10 = (short)-5897;
unsigned long long int var_11 = 13351328667732459205ULL;
long long int var_12 = -938440003838455965LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
