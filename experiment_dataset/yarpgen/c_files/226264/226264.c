/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 ^= (((arr_0 [i_0]) | (arr_1 [i_0] [i_0])));
        var_21 = ((127 ? 251658240 : 28735));
        var_22 += arr_1 [i_0] [i_0];
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_23 = ((((((arr_2 [i_1]) >> (arr_2 [i_1])))) ? (((max((arr_2 [i_1]), 6)))) : (1 || 2310443614)));
        arr_4 [i_1] [i_1] = (min((arr_2 [i_1]), ((1 <= (!1984523693)))));
        var_24 = ((~(348771890 | var_8)));
        var_25 = ((((((arr_1 [i_1] [i_1]) ? var_18 : (arr_3 [i_1] [i_1])))) ? (min((65531 | var_5), (arr_1 [i_1] [i_1]))) : (((~((60 ? 1 : 248)))))));
        arr_5 [i_1] = (min(((-(min(1263506337, 2310443591)))), var_11));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                arr_11 [9] [i_3] = (((((-1 ? 18446744073709551604 : 5))) ? (((arr_6 [i_3]) ? 61 : (-1 <= var_17))) : 59281));
                arr_12 [i_3] [i_3] = (max((arr_6 [i_3]), (max((arr_8 [i_2] [i_3] [i_3]), (arr_7 [i_2])))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_26 ^= (arr_6 [i_5]);
                            arr_17 [i_3] = ((((var_11 * (3363158 * 48470))) - 1274418443));
                        }
                    }
                }
                var_27 = ((~(((((1 << (var_14 - 103)))) ? (-46 + 48445) : -7))));
            }
        }
    }
    var_28 = (max(var_9, var_12));
    var_29 = (((((48482 || ((min(var_4, 1)))))) / ((var_13 ? (min(var_17, var_17)) : ((var_9 ? var_1 : -44))))));
    #pragma endscop
}
