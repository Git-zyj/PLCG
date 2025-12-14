#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)31890;
unsigned int var_2 = 3776963691U;
unsigned long long int var_6 = 10705899896262287176ULL;
unsigned long long int var_7 = 2053045833979069784ULL;
signed char var_8 = (signed char)117;
unsigned long long int var_9 = 3840345088050691812ULL;
int zero = 0;
unsigned long long int var_10 = 10175582569437550290ULL;
unsigned long long int var_11 = 12635102922938652839ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
