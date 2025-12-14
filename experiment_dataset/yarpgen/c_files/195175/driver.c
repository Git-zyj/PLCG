#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8784456493403804275LL;
signed char var_3 = (signed char)85;
long long int var_4 = -5968986094339361673LL;
long long int var_6 = -5522258096523634078LL;
long long int var_7 = 798188804429413072LL;
signed char var_8 = (signed char)-40;
unsigned long long int var_9 = 16059445759922181064ULL;
int zero = 0;
int var_11 = 1738288265;
signed char var_12 = (signed char)-84;
unsigned long long int var_13 = 5892131379786953010ULL;
long long int var_14 = -1237973564961694300LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
