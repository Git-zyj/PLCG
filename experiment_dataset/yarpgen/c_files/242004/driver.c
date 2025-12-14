#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)195;
unsigned int var_2 = 4007374152U;
long long int var_8 = -1296023697304825953LL;
unsigned char var_9 = (unsigned char)184;
unsigned long long int var_11 = 14254474662556830712ULL;
unsigned long long int var_17 = 17965377923875558394ULL;
int zero = 0;
unsigned int var_18 = 3244105147U;
signed char var_19 = (signed char)-125;
signed char var_20 = (signed char)-120;
long long int var_21 = -968438107119258833LL;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
