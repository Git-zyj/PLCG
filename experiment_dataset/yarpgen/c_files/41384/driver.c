#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -158126188050726808LL;
long long int var_5 = -3971053303193035693LL;
long long int var_6 = 566880971136219292LL;
long long int var_7 = -3857888522248836452LL;
long long int var_10 = -558275403201867807LL;
long long int var_12 = -4038617276480126828LL;
long long int var_16 = 8100178932493560235LL;
int zero = 0;
long long int var_19 = 8714715477534029976LL;
long long int var_20 = 7227558426256413261LL;
long long int var_21 = 8853896008312567785LL;
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
