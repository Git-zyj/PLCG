/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((min(var_14, var_12))) ? ((max(var_11, var_6))) : ((~((min(var_13, 1)))))));
    var_18 &= var_16;
    var_19 = ((var_16 ? var_1 : (((var_8 && 1) ? var_0 : var_1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_11 [9] [i_1] [i_0] [i_2] [i_3] = (((((((var_5 ? 1 : 1))) <= (arr_5 [i_0]))) ? ((min(((256 ? var_9 : (arr_6 [7] [7] [i_0]))), -17518))) : var_4));
                            arr_12 [i_0] = (max((arr_6 [i_3] [i_2] [i_1]), (((arr_8 [i_0] [i_0] [i_0]) | (arr_9 [i_0] [i_2] [i_1] [i_0] [i_0] [i_0])))));
                            var_20 = (arr_7 [i_3] [i_2] [i_1] [i_0]);
                        }
                    }
                }
                var_21 = ((+(((((6 ? (arr_10 [i_0] [i_0] [i_1]) : (arr_0 [i_0] [i_1])))) ? 1 : (min(var_8, (arr_5 [i_0])))))));
                var_22 = (arr_7 [8] [i_0] [i_1] [i_1]);
            }
        }
    }
    var_23 = (!var_1);
    #pragma endscop
}
