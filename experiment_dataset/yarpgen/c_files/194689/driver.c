#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8648765610511588065LL;
unsigned char var_11 = (unsigned char)194;
unsigned long long int var_17 = 17905058655611436587ULL;
int zero = 0;
long long int var_20 = 5842838378752085722LL;
unsigned long long int var_21 = 16108439663821510632ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
