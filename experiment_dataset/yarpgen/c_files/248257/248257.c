/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_5 ? ((var_4 ? var_8 : (((min(var_7, var_10)))))) : ((((max(var_9, var_6)))))));
    var_14 = 4294967295;
    var_15 &= (max(-4294967278, (max((min(var_12, var_1)), (var_2 == var_8)))));
    var_16 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = (min(var_17, 7326360900502951257));
                arr_5 [i_0] [i_0] = (arr_1 [i_1]);

                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    var_18 = (min(((+(max((arr_1 [i_0]), 8191)))), (arr_3 [i_0] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_19 = (arr_7 [i_3] [i_3] [i_3]);
                                var_20 = ((var_7 ? var_3 : ((((((var_7 ? -1032001100 : (arr_10 [i_0])))) ? 3028418576 : (((var_11 ? var_9 : var_12))))))));
                                var_21 = (arr_3 [i_0] [i_1]);
                                arr_15 [i_2] [i_3] = (arr_7 [i_1 + 3] [i_2] [i_4]);
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    var_22 ^= ((((max((((arr_10 [i_0]) ? var_3 : (arr_10 [i_0]))), var_5))) ? (arr_4 [18] [i_1 - 2] [i_1 - 2]) : (arr_17 [i_5] [i_5] [i_5])));

                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        arr_21 [i_0] [i_1] [i_5] [i_5] [i_6] = var_6;
                        var_23 = ((min((arr_7 [i_1 - 1] [i_1] [i_1 + 2]), (arr_7 [i_1 - 1] [i_1 + 1] [i_1 - 2]))));
                    }
                }
                arr_22 [i_0] [i_0] [i_0] = ((var_5 ? (min((arr_8 [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_0]), (((arr_8 [i_0] [i_0] [i_0] [i_0]) ? var_11 : (arr_6 [i_0] [i_0]))))) : (((~(arr_3 [i_0] [i_0]))))));
            }
        }
    }
    #pragma endscop
}
