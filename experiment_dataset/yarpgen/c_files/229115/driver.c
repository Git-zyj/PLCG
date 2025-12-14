#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14405005758984461416ULL;
unsigned long long int var_3 = 2792393372763331800ULL;
unsigned short var_4 = (unsigned short)13908;
unsigned long long int var_6 = 18254231466265409160ULL;
unsigned short var_8 = (unsigned short)22105;
unsigned long long int var_9 = 8435815978471329476ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)24894;
_Bool var_11 = (_Bool)0;
int var_12 = -598607354;
unsigned int var_13 = 510934264U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
