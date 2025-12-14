#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27377;
long long int var_1 = 2003273928757121298LL;
long long int var_8 = 5152154731042212888LL;
unsigned char var_9 = (unsigned char)223;
long long int var_10 = 456490029115198923LL;
int zero = 0;
unsigned long long int var_11 = 6047715386019612702ULL;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 2544363743972095870ULL;
_Bool var_14 = (_Bool)0;
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
