/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= 716590835;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_6 [i_0] = (((((((min(var_3, 54838))) ? (((arr_3 [i_0] [i_1 - 2] [i_0]) ? (arr_5 [i_0] [i_1 + 1] [i_2]) : var_8)) : var_12))) ? (max((((var_2 ? var_0 : (arr_2 [i_0] [i_1 - 1] [i_2])))), 121425256)) : 8026));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [3] [i_3] [i_2] [i_2 - 1] [i_3] [i_4] = (min((max(19, 57496)), ((((arr_10 [i_3] [i_3 + 1] [i_3 - 3] [i_4 + 1]) ? (arr_9 [i_0] [i_3] [i_3] [i_4 + 1] [i_4]) : (arr_9 [i_1] [i_3] [i_2] [i_4 + 1] [i_4]))))));
                                arr_12 [i_3] [i_2] [1] [i_4] = (arr_9 [i_2] [i_3] [1] [i_2] [i_2 - 1]);
                                var_16 = (arr_3 [i_2 - 1] [i_2 - 1] [i_1 + 1]);
                                var_17 *= (((((!((max(var_6, -9130226659314251079)))))) - -6));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_18 = (min(var_18, ((max(18, 57509)))));
                        var_19 = (min(var_19, ((max(-49, var_12)))));
                        arr_16 [i_2] [i_2 + 1] [i_2] &= 1417143340;
                    }
                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {
                        arr_19 [5] [i_6] [i_6] [i_6] = ((-(((arr_15 [i_1] [i_1 - 2] [i_2 - 1] [i_6 + 1] [i_6 + 1]) * -15))));
                        arr_20 [i_6] [6] [10] [14] = (((arr_15 [i_0] [i_1] [i_1 - 1] [i_6 - 1] [i_2 + 1]) ? (arr_0 [i_1 + 1] [i_2 + 1]) : ((((arr_15 [i_0] [i_1] [i_1 - 2] [i_6 - 1] [i_2 + 1]) != (arr_0 [i_1 - 1] [i_2 + 1]))))));
                    }
                }
            }
        }
    }
    var_20 = max(((var_11 >> (((max(var_12, 9130226659314251072)) - 9130226659314251053)))), (((var_8 ? var_12 : -7))));
    #pragma endscop
}
