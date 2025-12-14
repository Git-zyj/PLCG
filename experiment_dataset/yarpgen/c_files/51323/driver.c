#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)109;
_Bool var_5 = (_Bool)1;
unsigned long long int var_8 = 6119925418934085414ULL;
int var_12 = 582741321;
signed char var_14 = (signed char)60;
int var_18 = 1166850786;
int zero = 0;
long long int var_19 = 8308866943636743648LL;
long long int var_20 = 4784004589149140558LL;
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
