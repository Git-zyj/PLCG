#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2573436385U;
unsigned long long int var_2 = 5504929251697602225ULL;
long long int var_5 = 1272509587963365533LL;
int var_12 = -1970974327;
int zero = 0;
unsigned long long int var_19 = 16744699611927116675ULL;
int var_20 = -588118435;
int var_21 = -1975047167;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
