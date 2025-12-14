#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)89;
long long int var_2 = -45906995937616950LL;
long long int var_4 = -1428041803621292106LL;
int var_6 = 1955977078;
unsigned short var_9 = (unsigned short)31755;
signed char var_11 = (signed char)125;
int zero = 0;
long long int var_14 = -1282242074215775940LL;
int var_15 = -2097189496;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
