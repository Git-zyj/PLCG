/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (((((max(((var_6 ? var_2 : var_5)), (~var_12)))) ? ((var_1 ? (!4294967295) : (max(var_17, var_3)))) : var_17)))));
    var_19 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (((((max((min(26, 203)), (arr_6 [i_0])))) >> (((((min(var_3, var_16)) - (((var_16 ? var_11 : var_13))))) - 66)))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_21 = (max(var_21, (((~-1) ? (!1) : (((((var_15 ? var_5 : var_1))) ? var_12 : (var_13 || var_9)))))));
                            var_22 = ((((var_15 ? var_10 : (arr_12 [i_0] [i_3 - 1] [i_2 + 1] [10])))) ? var_5 : (min(2781909259, (arr_3 [i_3] [i_2 - 1] [i_3 + 1]))));
                        }
                    }
                }
                var_23 = (((arr_1 [i_1]) ? (!var_2) : (min((var_0 >> var_5), ((174 ? var_7 : 32767))))));
                var_24 = (((((((max(var_12, var_14))) >> (((max(var_7, 226)) - 216))))) ? var_15 : ((max((arr_11 [4] [i_0] [4] [1] [i_1]), (!var_2))))));
            }
        }
    }
    var_25 = (((((min(var_11, var_9)) > var_15))) - (((!(max(var_14, var_13))))));
    #pragma endscop
}
