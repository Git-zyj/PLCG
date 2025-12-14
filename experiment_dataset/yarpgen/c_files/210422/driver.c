#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 13322945480325185272ULL;
long long int var_10 = -5171663595292965952LL;
unsigned long long int var_13 = 5644101394279009533ULL;
int var_15 = 269496434;
int zero = 0;
unsigned short var_20 = (unsigned short)26376;
unsigned int var_21 = 2639563601U;
unsigned short var_22 = (unsigned short)51108;
int var_23 = -1088811434;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
