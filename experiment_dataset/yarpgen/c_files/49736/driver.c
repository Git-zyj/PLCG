#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1957831223;
short var_3 = (short)-19863;
long long int var_5 = 7324559415050041628LL;
unsigned long long int var_7 = 2869051952572692056ULL;
unsigned long long int var_10 = 13992576041583640949ULL;
short var_11 = (short)-11230;
int zero = 0;
int var_12 = 131842458;
short var_13 = (short)6431;
short var_14 = (short)25820;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
