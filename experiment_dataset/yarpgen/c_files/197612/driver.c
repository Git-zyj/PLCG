#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)15;
long long int var_2 = 9127334138459113419LL;
unsigned long long int var_4 = 17459273457017614261ULL;
int var_5 = -1856568845;
long long int var_8 = -2417691939135410924LL;
int zero = 0;
long long int var_11 = 3796314283640242732LL;
unsigned short var_12 = (unsigned short)58188;
signed char var_13 = (signed char)114;
unsigned long long int var_14 = 2743693483356957821ULL;
unsigned long long int var_15 = 5009777310122767758ULL;
unsigned long long int var_16 = 4430998482163182481ULL;
int arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 88540437;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
