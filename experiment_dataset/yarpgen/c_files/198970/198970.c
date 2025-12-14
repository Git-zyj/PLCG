/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((255 ? (min((var_6 >> 30), var_12)) : 4294967295));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_17 += ((131068 ? (((((132 ? 179637280 : (arr_3 [i_0])))))) : (arr_1 [i_0 + 1] [3])));
        var_18 = (((arr_0 [i_0 + 3]) | (max(((255 ? 105 : 12)), 131069))));
        var_19 ^= 16133;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 = ((((((arr_4 [i_0 + 2] [i_0 + 1] [i_0 + 3]) ? (arr_4 [i_0 + 3] [i_1] [i_2]) : (arr_4 [i_2] [i_2] [5])))) ? ((((arr_2 [i_0 + 1] [i_0 + 2]) ? (arr_2 [i_0 + 2] [i_0 - 1]) : (arr_5 [i_0 + 4] [i_0] [i_0 + 3])))) : ((-(max(var_8, (arr_7 [i_2] [i_2] [i_2] [4])))))));
                    var_21 = (min(((((var_6 ? (arr_1 [11] [i_0 + 2]) : (arr_7 [i_0] [i_1] [10] [14]))) - ((((arr_7 [i_2] [i_1] [i_1] [i_1]) / -32765))))), (((~((~(arr_3 [0]))))))));
                    arr_9 [i_2] = ((~((min(var_10, (arr_6 [i_2] [i_2]))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 24;i_3 += 1)
    {
        arr_12 [13] [18] = 2130706432;
        var_22 = var_6;
    }
    for (int i_4 = 1; i_4 < 22;i_4 += 1)
    {
        var_23 = (!var_11);
        var_24 += ((((((arr_13 [i_4 + 2]) & (-131070 < 29472)))) ? -var_10 : (!var_14)));
        var_25 += ((!((max((arr_11 [i_4 + 1] [i_4 + 2]), (arr_11 [i_4 - 1] [i_4 + 1]))))));
    }
    #pragma endscop
}
