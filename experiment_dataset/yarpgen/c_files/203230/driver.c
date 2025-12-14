#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4029650177393772968LL;
unsigned long long int var_7 = 9998034573351506284ULL;
short var_11 = (short)20331;
unsigned short var_13 = (unsigned short)31355;
int zero = 0;
signed char var_17 = (signed char)6;
unsigned long long int var_18 = 15828524525141874067ULL;
long long int var_19 = -7068891201047167651LL;
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
