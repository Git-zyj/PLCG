/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_17 = ((+((~(min((arr_1 [i_0]), (arr_7 [11] [i_1] [i_2] [i_3] [11])))))));
                            var_18 = (max(var_18, (((~((((max(var_16, var_1))) ? (((-(arr_4 [i_0] [i_0] [i_0] [i_0])))) : (arr_8 [i_0] [i_0] [i_0] [17]))))))));
                        }
                    }
                }
                var_19 = (max(((min((arr_6 [i_1 + 1] [i_1 - 2] [i_1 - 2]), (arr_6 [i_1 + 1] [i_1 - 2] [i_1 - 2])))), var_12));
                arr_9 [i_0] = (((max((arr_4 [10] [10] [i_1 + 1] [10]), (arr_7 [i_1] [i_1] [i_1 + 1] [i_1] [i_1]))) > (((arr_7 [i_1] [i_1 - 1] [i_1 - 2] [i_1] [i_1 - 2]) ? (arr_7 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1] [i_1 - 2]) : var_3))));
            }
        }
    }
    var_20 = ((-((~((var_15 ? var_5 : var_15))))));
    var_21 = (((((min(var_2, var_6)) >= (((var_2 ? var_7 : var_9))))) ? (((((var_4 ? var_4 : var_3))) ? (max(var_16, var_10)) : var_14)) : (((((var_8 ? var_10 : var_6))) ? var_10 : (min(var_15, var_13))))));
    var_22 = (((((var_6 ? var_7 : ((var_7 ? var_5 : var_7))))) > ((var_2 ? ((min(var_16, var_13))) : ((var_5 ? var_2 : var_10))))));
    #pragma endscop
}
