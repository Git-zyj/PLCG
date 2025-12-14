/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_20 = ((arr_4 [i_1 + 3] [i_1] [i_1 + 1]) * (min(0, (arr_4 [i_1 + 3] [i_1] [i_1 + 1]))));
                arr_5 [i_1] = (max((min(var_16, 6911270056021303622)), ((max((arr_4 [i_1 - 2] [i_1] [i_1]), (arr_4 [i_1 + 3] [i_1] [i_1]))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 21;i_4 += 1)
            {
                {
                    arr_16 [i_2] [i_2] = ((((max(var_14, (max(var_14, (arr_13 [i_3 + 1] [i_2 + 1])))))) ? (min(((var_15 >> (var_18 + 517))), var_19)) : (((-1 && (arr_14 [i_2 + 1]))))));
                    arr_17 [i_2 + 1] [i_3] [i_4] [i_4] = ((((((max(11535474017688247994, 11535474017688247994)) + ((var_13 ? 6911270056021303612 : 0))))) ? (((arr_11 [i_2 + 1] [i_4 + 1]) * ((min(var_3, (arr_3 [12])))))) : ((((var_19 ? (arr_1 [i_3] [i_4]) : var_19)) * (arr_11 [i_2] [i_3])))));
                    var_21 = ((((max((arr_2 [i_2 - 1]), (arr_2 [i_2 - 1])))) ? ((((arr_4 [i_2 - 1] [i_4 + 3] [i_4]) ? (arr_4 [i_2 + 1] [i_4 + 4] [i_4]) : (arr_12 [i_3] [i_4 + 4] [i_4 - 1])))) : (min((var_8 & var_4), (max(4294967290, var_17))))));
                }
            }
        }
    }
    var_22 = (!((min(var_16, (!var_14)))));

    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_23 = (arr_0 [i_5]);
        var_24 |= ((var_16 | ((max(11106, 2382)))));
        var_25 ^= (max((((arr_9 [i_5]) ? (arr_20 [i_5]) : (arr_9 [i_5]))), (arr_8 [i_5])));
    }
    #pragma endscop
}
