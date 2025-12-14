#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1019934489247627564LL;
unsigned long long int var_2 = 893951813351601209ULL;
long long int var_3 = -6540402171880276209LL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 4576165495932583605ULL;
short var_8 = (short)-16439;
unsigned long long int var_9 = 15898467320588787807ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = 5021399040764795703LL;
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
