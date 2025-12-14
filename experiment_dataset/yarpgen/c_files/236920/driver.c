#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_6 = 1493440397002066640LL;
unsigned char var_9 = (unsigned char)28;
long long int var_10 = 5724936001693146372LL;
unsigned long long int var_11 = 13112156634384942441ULL;
long long int var_13 = 7053677452477626201LL;
unsigned char var_15 = (unsigned char)60;
int zero = 0;
unsigned char var_17 = (unsigned char)92;
long long int var_18 = 7997926294011323642LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
