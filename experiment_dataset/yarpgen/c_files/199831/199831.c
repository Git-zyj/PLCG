/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_18 = 2814715580;
                    var_19 = (max((min((arr_6 [i_0 - 1]), (arr_3 [i_0]))), ((((arr_5 [i_0] [i_1] [i_2]) ? (arr_1 [7]) : (arr_5 [i_0 + 1] [i_1] [i_0 + 1]))))));
                    var_20 = 9223372036854775807;
                }
            }
        }
    }
    var_21 = (min(var_6, ((-((var_11 ? 11522107192832247058 : var_4))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            {
                arr_13 [i_3] = (arr_2 [i_4] [i_3]);
                var_22 = ((397675661 ? ((min((arr_4 [i_3] [i_4] [i_4]), var_5))) : (((min(17216499196969020652, 2))))));
                var_23 = (-9223372036854775807 - 1);
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_24 = (min(var_24, ((((((arr_11 [1] [0] [3]) >= (~1230244876740530940))) ? 20623 : (((arr_3 [i_5]) ? (((arr_0 [i_3]) ? var_15 : 3897291634)) : ((((-9223372036854775807 - 1) ? 449878450 : var_12))))))))));
                                var_25 = (min((((!((min(var_0, (arr_11 [i_3] [i_3] [i_5]))))))), 4294967281));
                                var_26 = ((((((((arr_6 [i_3]) ? 11522107192832247058 : var_17))) ? (arr_16 [i_3] [i_3] [i_3] [i_3] [i_3] [5]) : (arr_14 [i_3] [i_7] [i_3]))) + (arr_8 [i_3])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = var_3;
    var_28 = (min(((var_17 ? (17216499196969020657 > var_15) : var_4)), var_5));
    #pragma endscop
}
