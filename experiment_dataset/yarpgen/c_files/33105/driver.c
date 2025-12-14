#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -377437540;
unsigned short var_3 = (unsigned short)21306;
unsigned char var_5 = (unsigned char)4;
unsigned int var_7 = 2480917839U;
unsigned int var_8 = 3676399119U;
unsigned char var_9 = (unsigned char)16;
unsigned char var_10 = (unsigned char)180;
unsigned short var_12 = (unsigned short)10715;
unsigned char var_13 = (unsigned char)223;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = 9120718284167085876LL;
unsigned long long int var_17 = 5053606001695535805ULL;
int var_18 = -647555472;
unsigned long long int arr_1 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 9793097240517334667ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
