#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6659048107806835896LL;
short var_5 = (short)-17383;
short var_6 = (short)31925;
unsigned int var_7 = 187452034U;
unsigned int var_8 = 1983190497U;
unsigned long long int var_9 = 13267305374379054215ULL;
unsigned long long int var_10 = 12620748066939767462ULL;
int zero = 0;
signed char var_12 = (signed char)4;
short var_13 = (short)9593;
unsigned long long int var_14 = 9709940965116212028ULL;
unsigned long long int var_15 = 6463869279964630940ULL;
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
