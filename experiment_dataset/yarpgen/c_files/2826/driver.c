#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -7162591684364558776LL;
long long int var_8 = 8654354566164475197LL;
unsigned char var_9 = (unsigned char)220;
int zero = 0;
unsigned int var_12 = 451167775U;
unsigned short var_13 = (unsigned short)60622;
unsigned short var_14 = (unsigned short)9411;
void init() {
}

void checksum() {
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
