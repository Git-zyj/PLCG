#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-5700;
short var_5 = (short)-21106;
unsigned short var_8 = (unsigned short)41507;
signed char var_9 = (signed char)-56;
signed char var_13 = (signed char)60;
_Bool var_15 = (_Bool)0;
signed char var_17 = (signed char)117;
int zero = 0;
unsigned long long int var_18 = 2270783997872918978ULL;
signed char var_19 = (signed char)-87;
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
