#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16553622684879158665ULL;
unsigned char var_5 = (unsigned char)115;
long long int var_7 = -7641063809597898856LL;
long long int var_9 = -3690329087103667489LL;
int zero = 0;
unsigned char var_16 = (unsigned char)56;
long long int var_17 = 120191561418973598LL;
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
