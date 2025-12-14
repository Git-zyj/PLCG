#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)228;
signed char var_3 = (signed char)108;
long long int var_4 = -3305654102810668579LL;
unsigned long long int var_6 = 16351883770550985455ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_17 = -8249059111604112664LL;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)242;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
