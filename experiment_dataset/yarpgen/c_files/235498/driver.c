#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)157;
int var_1 = -1912670035;
unsigned char var_3 = (unsigned char)142;
unsigned int var_4 = 4001047416U;
long long int var_5 = 6923362419236744844LL;
long long int var_6 = 678830299431066188LL;
unsigned char var_9 = (unsigned char)124;
int var_10 = -1570693994;
int zero = 0;
long long int var_11 = 7518999764910504898LL;
long long int var_12 = 4493400559239722055LL;
unsigned int var_13 = 1282202483U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
