/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~var_0);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_21 = ((~(~var_7)));
                                var_22 = ((-(((arr_5 [i_0] [i_1] [i_2]) ? (((((arr_8 [7] [i_1] [i_1]) == var_12)))) : (min(3410559733, 884407572))))));
                                var_23 = (min(var_23, ((min((((~var_17) ? (max(var_16, var_18)) : (!var_4))), (((!((max((arr_7 [i_4]), var_17)))))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_24 = (((((-((var_4 ? (arr_12 [i_0 - 2] [i_0 - 2]) : var_9))))) ? ((-1 ? (max((arr_18 [i_5 - 2] [i_2] [i_1] [i_0 + 1]), (arr_1 [i_5] [i_6]))) : (((arr_10 [i_0] [i_1] [i_0] [i_6]) * var_9)))) : (((max((arr_3 [i_0 - 1] [i_0 - 1]), (arr_3 [i_0 + 1] [i_1])))))));
                                var_25 = (max(var_25, (((!((((arr_11 [i_5 - 2] [i_5] [i_5] [i_0] [i_0 - 2]) ? (arr_11 [i_5 - 2] [17] [i_2] [i_0 + 2] [i_0 + 2]) : (arr_11 [i_5 - 1] [i_0 - 1] [i_2] [i_2] [i_0 - 1])))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_26 = (max(var_26, (((+((~((max((arr_7 [i_2]), var_7))))))))));
                                var_27 += ((!(((max(var_8, (arr_4 [i_0] [i_0])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 &= (var_3 ? (min((((var_16 ? var_18 : var_18))), ((var_16 ? var_6 : var_16)))) : var_8);
    #pragma endscop
}
