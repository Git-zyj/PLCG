#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 763754225U;
_Bool var_1 = (_Bool)0;
long long int var_4 = 3056499767056656884LL;
unsigned char var_7 = (unsigned char)146;
unsigned int var_9 = 3198187381U;
unsigned int var_14 = 729823794U;
unsigned int var_15 = 3056567123U;
int zero = 0;
unsigned long long int var_16 = 3694442506035959945ULL;
unsigned int var_17 = 1181429910U;
void init() {
}

void checksum() {
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
