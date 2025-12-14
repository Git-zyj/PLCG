#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_11 = 4183066000567127607LL;
_Bool var_12 = (_Bool)0;
short var_13 = (short)31440;
signed char var_14 = (signed char)-102;
int var_15 = -989816100;
int zero = 0;
unsigned char var_19 = (unsigned char)65;
unsigned long long int var_20 = 6007581062669480800ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
