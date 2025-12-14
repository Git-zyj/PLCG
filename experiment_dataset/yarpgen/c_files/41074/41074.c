/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = var_5;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_14 = (!var_13);
                            arr_15 [i_2] = var_11;
                            arr_16 [i_0] [i_1 - 2] [i_2] [i_3] = ((((((arr_12 [i_2 + 1] [i_2 - 1] [i_2 - 2]) ? (arr_10 [i_2 + 1]) : (arr_10 [i_2 + 1])))) ? var_6 : (min(58587, 11853051533532990665))));
                            var_15 ^= var_7;
                            var_16 = (max(var_16, (arr_6 [i_0] [i_0])));
                        }
                    }
                }
            }
        }
    }
    var_17 = ((max((var_12 != var_8), var_1)));
    #pragma endscop
}
