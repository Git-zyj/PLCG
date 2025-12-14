#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)5844;
unsigned long long int var_4 = 3380475019143399545ULL;
unsigned int var_5 = 3328094151U;
unsigned long long int var_6 = 8167288806958950170ULL;
signed char var_9 = (signed char)-77;
int zero = 0;
signed char var_10 = (signed char)-50;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)31686;
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
