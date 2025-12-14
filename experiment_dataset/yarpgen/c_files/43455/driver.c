#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)165;
unsigned long long int var_2 = 7953587580889975644ULL;
long long int var_3 = -8927971004155644479LL;
long long int var_4 = -5993095630703804389LL;
long long int var_5 = 6145067160089571359LL;
unsigned short var_8 = (unsigned short)30546;
short var_9 = (short)-11676;
int zero = 0;
short var_10 = (short)32164;
short var_11 = (short)32006;
unsigned int var_12 = 3490044881U;
int var_13 = -1779465765;
unsigned char var_14 = (unsigned char)40;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
