#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)216;
_Bool var_3 = (_Bool)0;
long long int var_4 = 4471307891563199897LL;
short var_9 = (short)31826;
unsigned long long int var_15 = 1536767570608598268ULL;
int zero = 0;
unsigned long long int var_17 = 8678164425241550105ULL;
long long int var_18 = -6836473486383513879LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
