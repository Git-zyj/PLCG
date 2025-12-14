#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)167;
int var_6 = -345317311;
long long int var_8 = -4861632921727385360LL;
int zero = 0;
unsigned char var_19 = (unsigned char)129;
short var_20 = (short)-26003;
unsigned char var_21 = (unsigned char)251;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
