/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_16 = ((-((var_7 ? var_4 : (arr_1 [i_0 + 1] [i_0 - 1])))));
        arr_3 [i_0] [i_0] &= 3249568207945046899;
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    var_17 = (0 ? ((((arr_4 [i_0 + 1]) ? (arr_4 [i_0 + 1]) : (arr_4 [i_2 + 2])))) : var_11);
                    var_18 = (max(var_18, ((max(14391, ((255 ? 252 : 1)))))));
                }
            }
        }
        arr_9 [i_0] &= (arr_6 [0]);
    }
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        arr_12 [i_3 + 1] [i_3] = (((min(((var_9 ? 0 : var_5)), ((max(8454, 3807283849)))))) ? 4294967274 : (arr_10 [i_3]));
        arr_13 [i_3 + 1] = (min(((var_5 ? var_3 : (arr_11 [i_3 + 1] [i_3 - 1]))), 1));
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            {
                arr_18 [i_5] = ((~(arr_16 [i_5] [i_4 - 3] [i_5])));
                arr_19 [i_5 + 1] [i_5] [i_4 - 2] = (((var_10 ? 1 : ((var_5 ? (arr_14 [i_5]) : var_4)))));
                var_19 = (min(var_19, var_8));
                arr_20 [i_4] [i_5] [i_4] = (min((((arr_14 [i_4]) ? (((2982179158944490471 ? 0 : var_10))) : (~2626126851))), 1606863767));
                var_20 = (~(arr_14 [i_5 + 2]));
            }
        }
    }
    var_21 ^= max((!var_12), (max((!var_3), var_11)));
    #pragma endscop
}
