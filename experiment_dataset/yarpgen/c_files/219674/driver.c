#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1402217569;
unsigned long long int var_1 = 2434617970155748675ULL;
unsigned long long int var_5 = 14159834675636154279ULL;
unsigned long long int var_6 = 16990236775900211456ULL;
int zero = 0;
signed char var_13 = (signed char)47;
signed char var_14 = (signed char)-73;
void init() {
}

void checksum() {
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
