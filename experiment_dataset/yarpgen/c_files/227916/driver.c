#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6154498177342484786LL;
long long int var_1 = -384113387142970646LL;
long long int var_2 = -3809275232332843414LL;
long long int var_3 = -3557456886102509812LL;
long long int var_4 = -5715412575508412414LL;
long long int var_6 = 6644473084462411702LL;
long long int var_10 = 6558195865450070168LL;
long long int var_11 = 9215333664652642396LL;
int zero = 0;
long long int var_15 = 4762441901394623976LL;
long long int var_16 = -6231284119669532517LL;
long long int var_17 = -1940270399642450135LL;
long long int var_18 = 6196410270794291301LL;
long long int var_19 = 1252514513106385414LL;
long long int var_20 = -4933012178912516226LL;
long long int var_21 = -7937980415276737060LL;
long long int var_22 = 3994957905828260882LL;
long long int var_23 = 7261198231745181225LL;
long long int var_24 = -4787725053669604374LL;
long long int var_25 = 1909530823971242417LL;
long long int var_26 = 3320568082934613513LL;
long long int var_27 = 8377037793514930896LL;
long long int var_28 = 3081411702625226209LL;
long long int var_29 = -2693286248134685262LL;
long long int arr_0 [18] ;
long long int arr_1 [18] [18] ;
long long int arr_2 [18] ;
long long int arr_3 [18] ;
long long int arr_6 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 6534032705787041084LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = -8254403159477100461LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 4391221070343286405LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = -6940901245695534860LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = -3567278203981595447LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
