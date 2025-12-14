#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)60;
unsigned int var_2 = 3282766258U;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-36;
signed char var_5 = (signed char)-5;
signed char var_6 = (signed char)-37;
long long int var_7 = 5292426973547368845LL;
signed char var_9 = (signed char)-29;
int zero = 0;
unsigned short var_10 = (unsigned short)51463;
unsigned short var_11 = (unsigned short)51509;
unsigned long long int var_12 = 8613326373314542448ULL;
unsigned char var_13 = (unsigned char)61;
long long int var_14 = 2802017472607758266LL;
long long int var_15 = 6604476567619989830LL;
long long int var_16 = 3532305602286896722LL;
long long int arr_1 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -4930350305498742497LL;
}

void checksum() {
    hash(&seed, var_10);
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
