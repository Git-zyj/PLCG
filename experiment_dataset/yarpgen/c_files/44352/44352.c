/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((-var_4 >= var_3), -var_12));
    var_17 = (((((var_3 ? ((894753977 << (((-1723898773 + 1723898802) - 28)))) : (var_15 / var_11)))) ? (max(11100772701920281276, 37)) : ((min(var_11, var_11)))));
    var_18 = (!var_0);
    var_19 += (max((var_10 ^ var_1), var_12));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [5] = ((~(min((arr_1 [i_0]), -1))));
        var_20 = (min((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_7)), (max(((max(2079186015, 2102508380))), var_3))));
        arr_3 [i_0] = ((((!(arr_0 [i_0])))));
    }
    #pragma endscop
}
