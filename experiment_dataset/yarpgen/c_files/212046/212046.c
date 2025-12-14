/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_11, (~-var_7)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 21;i_3 += 1) /* same iter space */
                    {
                        var_14 += (max(((((((arr_5 [i_0] [i_0] [i_2] [22]) & (arr_6 [i_0] [i_1] [i_2])))) ? var_9 : ((min(var_1, (arr_6 [i_3 - 3] [i_2] [i_1])))))), (arr_6 [i_0] [i_1] [i_1])));
                        var_15 = ((!(0 > 5036)));
                        var_16 = (0 || 1762428332);
                        arr_10 [i_0 - 3] [i_0] [i_1] [i_2] [i_0 - 3] [i_3 + 4] = (arr_7 [i_0]);
                    }
                    for (int i_4 = 4; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_2] [i_4] = 0;
                        arr_14 [i_1] [i_1] [i_2] [i_1] = (arr_2 [i_1]);
                        var_17 = ((arr_12 [i_0 - 2] [i_1]) ? ((max((arr_1 [i_4 + 3]), (arr_1 [i_2])))) : (((arr_1 [i_0 - 3]) ? (arr_12 [i_0 - 3] [i_4 + 2]) : (arr_1 [i_4]))));
                    }
                    for (int i_5 = 2; i_5 < 23;i_5 += 1)
                    {
                        var_18 = (((arr_6 [i_5] [i_5 + 2] [i_0 - 2]) && (((0 ? 212 : 1274129782)))));
                        var_19 += (min((arr_1 [i_0 - 2]), ((((arr_2 [i_0 - 2]) || (arr_1 [i_0 - 2]))))));
                    }
                    for (int i_6 = 2; i_6 < 22;i_6 += 1)
                    {
                        var_20 ^= min(1, (max((arr_6 [i_0] [i_1] [i_0]), 3803395535665400411)));
                        arr_19 [i_6 - 2] [i_6 - 2] &= ((((((arr_7 [i_1]) ? (arr_16 [4] [i_2] [i_6]) : ((3 ? -10156 : 64))))) / (((min((arr_0 [i_0]), (arr_0 [i_0]))) - (min(var_5, var_2))))));
                    }
                    arr_20 [i_2] = (max(((~(var_0 & var_7))), (!var_3)));
                    var_21 = var_8;
                }
            }
        }
    }
    #pragma endscop
}
