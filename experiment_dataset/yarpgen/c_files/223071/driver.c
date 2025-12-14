#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)11;
long long int var_2 = 5822672485639949453LL;
long long int var_3 = 1773477177201048941LL;
long long int var_4 = -7642199085647554134LL;
long long int var_5 = -3109593380177993862LL;
long long int var_6 = -593625887494301978LL;
long long int var_7 = -5291585302724257717LL;
short var_8 = (short)-22315;
unsigned char var_10 = (unsigned char)82;
int zero = 0;
long long int var_11 = -3309827449786972285LL;
long long int var_12 = 7734529810365644019LL;
long long int var_13 = 7499237626214133387LL;
long long int var_14 = 8554432353002779085LL;
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
