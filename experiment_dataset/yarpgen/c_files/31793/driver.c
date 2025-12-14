#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1187153028281386022ULL;
long long int var_3 = -4545293760796191046LL;
unsigned long long int var_5 = 2572180754020669905ULL;
unsigned long long int var_9 = 428119058549272893ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)31085;
long long int var_12 = -799791708206410715LL;
long long int var_13 = -5836542274766700910LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
