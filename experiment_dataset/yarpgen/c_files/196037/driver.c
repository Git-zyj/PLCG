#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)0;
long long int var_4 = -7706118166395108874LL;
unsigned char var_5 = (unsigned char)73;
signed char var_6 = (signed char)-29;
unsigned long long int var_8 = 16067239125746605367ULL;
int var_9 = -1478677910;
_Bool var_10 = (_Bool)1;
int var_12 = 652697203;
int zero = 0;
signed char var_13 = (signed char)-62;
_Bool var_14 = (_Bool)1;
int var_15 = -1518724920;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
