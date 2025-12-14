/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((max(1510754996, ((var_3 ? 0 : 2084)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_12 = (min(var_12, (((((((arr_0 [13] [13]) <= (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0])))))) | ((~(arr_1 [i_0]))))))));
        arr_2 [i_0] [i_0] &= ((var_6 ? (((var_9 == (arr_0 [i_0] [i_0])))) : ((-2084 ? -2072 : -536870912))));
        var_13 = ((~0) ? ((((arr_0 [i_0] [i_0]) & (~87)))) : ((((((arr_1 [i_0]) ? 87 : -67))) ? -2084 : (max(87, 7648367773577858065)))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_5 [i_1] = (((max((arr_4 [8] [i_1]), (-1969125551311725205 ^ 19034))) > ((((!-2084) ? 0 : -67)))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_14 = (((((1 ? -2084 : var_10))) ? (((!(arr_3 [i_1])))) : ((-(arr_7 [i_2] [i_2] [i_1])))));
            arr_9 [i_2] = ((((((arr_6 [i_1]) ? (arr_3 [i_1]) : (arr_6 [i_1])))) && ((!(arr_3 [i_2])))));
            var_15 = (arr_6 [i_2]);
        }
    }
    #pragma endscop
}
