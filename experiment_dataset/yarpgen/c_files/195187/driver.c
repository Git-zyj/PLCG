#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1137880858;
signed char var_1 = (signed char)-3;
int var_2 = 975922444;
unsigned long long int var_6 = 17814615680161724731ULL;
int var_9 = -1051334792;
int var_11 = -1223794460;
unsigned short var_12 = (unsigned short)14343;
unsigned long long int var_13 = 13429156809580518734ULL;
int zero = 0;
unsigned long long int var_14 = 1272771006205695611ULL;
long long int var_15 = 2468213789179196240LL;
int var_16 = -406285189;
unsigned long long int var_17 = 58330034011184687ULL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
