/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 -= arr_6 [16] [16] [i_2] [i_2];

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1] [i_1] [i_3 - 1] = 0;
                        arr_11 [i_1] [i_3 - 1] = (((arr_5 [i_1] [i_2] [i_3]) ? (((max((!var_1), (-127 - 1))))) : (arr_7 [i_3 - 1] [i_3 - 1] [i_3 - 1] [0])));
                        var_14 *= (max((arr_9 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1]), (arr_7 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3])));
                        var_15 *= (min((((arr_4 [i_3 - 1] [i_2] [i_0]) ? (arr_4 [i_0] [i_1] [i_0]) : (arr_4 [i_0] [i_2] [i_3 - 1]))), ((min((arr_4 [i_0] [i_1] [i_2]), (arr_4 [i_0] [i_1] [i_2]))))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_15 [i_4] [i_1] [i_1] [i_0] = ((~((~(arr_7 [i_4] [i_2] [i_1] [i_0])))));
                        arr_16 [i_0] [i_1] [0] [i_1] = ((((min(var_8, var_0))) ? ((1 >> ((((arr_0 [i_1] [i_2]) != (arr_0 [i_4] [i_2])))))) : (arr_14 [i_2])));
                        var_16 = (max((arr_4 [i_0] [i_2] [i_4]), (arr_4 [i_0] [i_4] [i_2])));
                        var_17 = (((var_3 <= (arr_0 [i_0] [i_4]))));
                    }
                }
            }
        }
    }
    var_18 = var_7;
    var_19 = (max(((min((!var_7), (var_9 && 185)))), (201 * 0)));
    #pragma endscop
}
