#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6863259508417957720LL;
long long int var_5 = 4031018653445134708LL;
long long int var_6 = 3682141792454591195LL;
long long int var_7 = -121261837391708492LL;
long long int var_10 = 6005069988137962312LL;
long long int var_11 = 5244739979770391267LL;
long long int var_12 = 2090108129732789239LL;
long long int var_13 = -6696125997006791490LL;
int zero = 0;
long long int var_14 = 6907001873938672240LL;
long long int var_15 = 7482194200322851083LL;
long long int var_16 = -3252515339878331474LL;
long long int var_17 = 6357741269837371789LL;
long long int var_18 = -4514297326525466685LL;
long long int var_19 = 2878246736479541738LL;
long long int arr_0 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -8666112239498598372LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
