#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13030633623958965354ULL;
short var_1 = (short)21225;
signed char var_2 = (signed char)-38;
unsigned long long int var_6 = 3499422071558872438ULL;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_11 = -6246219353041332366LL;
unsigned long long int var_12 = 9592235886655605774ULL;
int var_13 = -1271487187;
unsigned int var_14 = 3096122090U;
unsigned short var_15 = (unsigned short)26414;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
