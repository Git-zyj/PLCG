#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -5256865824940200463LL;
long long int var_13 = 5339215636334585203LL;
int zero = 0;
unsigned long long int var_19 = 3376645039314740598ULL;
unsigned int var_20 = 3587383464U;
unsigned long long int var_21 = 15071119967823424088ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
