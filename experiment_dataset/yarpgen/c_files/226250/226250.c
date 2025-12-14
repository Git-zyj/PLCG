/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((+(((var_7 % var_13) ? (~6427) : -18446744073709551615))));

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_19 = (((((min(2690495742, (arr_0 [i_0] [i_0]))) < (((var_2 ? var_12 : (arr_0 [5] [i_0]))))))) % (min(((126 ? (arr_0 [0] [7]) : (arr_0 [i_0 + 1] [i_0 - 1]))), (arr_1 [i_0] [i_0]))));
        arr_2 [i_0] [12] = (((max((((arr_0 [i_0] [i_0]) ? var_7 : var_7)), ((((arr_0 [i_0] [i_0]) && (arr_1 [i_0] [i_0 - 3])))))) < (arr_0 [i_0] [12])));
        var_20 = (max(var_20, (((((+((min((arr_1 [7] [7]), var_11))))) % (((((arr_1 [i_0] [i_0]) % (arr_0 [1] [i_0 + 2]))))))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_5 [i_1] [i_1] &= (((arr_4 [i_1]) % (arr_3 [i_1] [i_1])));
        var_21 = (min(var_2, ((min((arr_4 [i_1]), (((var_3 < (arr_3 [15] [8])))))))));
    }
    var_22 = -124;
    #pragma endscop
}
