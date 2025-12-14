#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)130;
short var_9 = (short)-15068;
signed char var_10 = (signed char)0;
short var_11 = (short)-24005;
long long int var_15 = 2154657321592787330LL;
unsigned long long int var_17 = 3190794237237135071ULL;
int zero = 0;
unsigned long long int var_20 = 15811296645878386172ULL;
_Bool var_21 = (_Bool)1;
long long int var_22 = 3000496591119312916LL;
unsigned long long int var_23 = 13736823082962787186ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
