#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 156679240U;
unsigned char var_4 = (unsigned char)205;
long long int var_6 = -3856202714118855793LL;
unsigned long long int var_7 = 6231191326385631624ULL;
unsigned long long int var_8 = 13105458484116650039ULL;
unsigned int var_9 = 1942042905U;
int zero = 0;
unsigned char var_10 = (unsigned char)72;
long long int var_11 = -739558307736680115LL;
unsigned long long int var_12 = 4502713503459205061ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
