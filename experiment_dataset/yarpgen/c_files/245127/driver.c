#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)166;
signed char var_2 = (signed char)-10;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 123375160931098445ULL;
unsigned long long int var_10 = 8939499029585020986ULL;
int zero = 0;
long long int var_17 = -6926284822934698395LL;
unsigned int var_18 = 1440417667U;
int var_19 = 156350217;
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
