#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4564235137043626567LL;
unsigned long long int var_1 = 13371695269205704327ULL;
int var_6 = -803062556;
long long int var_9 = 6260584473750836933LL;
int zero = 0;
unsigned long long int var_10 = 2020515129083763806ULL;
unsigned long long int var_11 = 18060403851731493605ULL;
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
