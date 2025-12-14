#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)37675;
_Bool var_3 = (_Bool)1;
int var_7 = 931414684;
signed char var_8 = (signed char)-127;
long long int var_15 = 5824184480593099331LL;
int zero = 0;
unsigned long long int var_20 = 8042460476614807111ULL;
unsigned long long int var_21 = 5829399313097582004ULL;
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
