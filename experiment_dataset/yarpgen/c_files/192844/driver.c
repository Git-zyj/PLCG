#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11167685933104518277ULL;
long long int var_3 = 5182196345839430883LL;
long long int var_5 = -5483201368444450630LL;
unsigned int var_11 = 3845698331U;
int zero = 0;
long long int var_12 = -666151422375474440LL;
unsigned long long int var_13 = 18259762072504731625ULL;
long long int var_14 = -5483984950566708138LL;
unsigned long long int var_15 = 3600263954340895931ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
