#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3000941556903011751LL;
signed char var_3 = (signed char)-120;
unsigned short var_8 = (unsigned short)60951;
int zero = 0;
long long int var_12 = -6654885038974809731LL;
unsigned short var_13 = (unsigned short)50962;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
