#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4503697103056290974LL;
long long int var_5 = -104612102398998570LL;
long long int var_7 = -6841136891371263883LL;
long long int var_8 = -172249523405590401LL;
long long int var_9 = 798831905835474147LL;
long long int var_10 = -1198523871417009964LL;
long long int var_11 = -1341133768254136122LL;
int zero = 0;
long long int var_12 = -9003886448047105307LL;
long long int var_13 = -5199020640353374853LL;
long long int var_14 = 5506733254862552680LL;
long long int var_15 = -5600448279356867048LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
