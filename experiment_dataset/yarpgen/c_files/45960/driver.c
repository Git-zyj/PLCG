#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3172896903685395333LL;
long long int var_1 = 8571875342013453494LL;
long long int var_2 = -4819850328997012602LL;
long long int var_3 = -2709139473501389745LL;
long long int var_4 = -4008329113342552067LL;
long long int var_5 = 192575336973912802LL;
long long int var_6 = 5143132603874749850LL;
long long int var_7 = -2732490362223306527LL;
long long int var_8 = -8588488595603791881LL;
long long int var_9 = -290775160961285315LL;
int zero = 0;
long long int var_10 = 4627031797724836929LL;
long long int var_11 = 3616660914941503780LL;
long long int var_12 = 238663565112872794LL;
long long int var_13 = -3012228989350605676LL;
long long int var_14 = -3499427275810261272LL;
long long int var_15 = -7020114048154772948LL;
long long int var_16 = 7596977088537895914LL;
long long int var_17 = -6144197423895708949LL;
long long int var_18 = -7857523269295297139LL;
long long int var_19 = 7092465958138596076LL;
long long int var_20 = 433401383995274914LL;
long long int var_21 = 1554789355420832781LL;
long long int var_22 = 962805230905045147LL;
long long int arr_2 [12] [12] ;
long long int arr_3 [12] [12] [12] ;
long long int arr_4 [12] [12] ;
long long int arr_6 [12] [12] [12] [12] ;
long long int arr_8 [12] [12] ;
long long int arr_9 [12] [12] [12] ;
long long int arr_14 [12] ;
long long int arr_15 [12] [12] [12] [12] ;
long long int arr_18 [12] [12] ;
long long int arr_30 [13] ;
long long int arr_32 [13] ;
long long int arr_7 [12] ;
long long int arr_12 [12] [12] [12] ;
long long int arr_21 [12] ;
long long int arr_24 [12] ;
long long int arr_25 [12] ;
long long int arr_33 [13] [13] ;
long long int arr_34 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 5903274655691128189LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 2468185935774043913LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = -1007883086294961404LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 685513593665278398LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = 6649136296066364232LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 234557659939606801LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = 2388717959271828272LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 5957520639359033338LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_18 [i_0] [i_1] = -8574043077585002456LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? 92390349208766549LL : -395566215350567604LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_32 [i_0] = 8100047233657367375LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 8885152943424596769LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = -8965314750735167664LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? -9137808194057095005LL : -6424992977198241886LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_24 [i_0] = 6425410693953434803LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_25 [i_0] = 5054733753597624176LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_33 [i_0] [i_1] = (i_0 % 2 == 0) ? 3903650327532985344LL : -5130822787378770219LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_34 [i_0] = (i_0 % 2 == 0) ? -2670904191331563956LL : -2022690900744936120LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_34 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
