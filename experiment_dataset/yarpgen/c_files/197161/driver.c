#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)27152;
unsigned short var_8 = (unsigned short)38227;
unsigned char var_9 = (unsigned char)199;
unsigned short var_10 = (unsigned short)44695;
unsigned long long int var_16 = 17974422438125871862ULL;
int zero = 0;
long long int var_18 = 61363774472322591LL;
unsigned long long int var_19 = 10749335863863857036ULL;
long long int var_20 = -8347475917921339989LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
