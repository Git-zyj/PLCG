#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)172;
unsigned short var_8 = (unsigned short)39182;
int var_10 = -2106517938;
signed char var_18 = (signed char)72;
int zero = 0;
long long int var_19 = -2507930072968476925LL;
long long int var_20 = 8925268152923730766LL;
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
