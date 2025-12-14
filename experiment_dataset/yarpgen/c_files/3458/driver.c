#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6900607523135043247LL;
unsigned long long int var_1 = 6785876465508110537ULL;
signed char var_3 = (signed char)28;
unsigned long long int var_4 = 16727544972720461147ULL;
signed char var_7 = (signed char)-9;
int zero = 0;
unsigned long long int var_10 = 372550456678145885ULL;
long long int var_11 = -2449661111124226688LL;
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
