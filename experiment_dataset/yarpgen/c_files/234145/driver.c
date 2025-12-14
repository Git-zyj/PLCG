#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3478107534U;
long long int var_5 = 3756227453968628097LL;
unsigned long long int var_8 = 6600378410336616350ULL;
int zero = 0;
unsigned long long int var_17 = 17797355835698327821ULL;
unsigned long long int var_18 = 9157730084694072869ULL;
unsigned long long int var_19 = 7875299328673216808ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
