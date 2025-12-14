/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 = (min(((((var_3 ? var_15 : (arr_7 [i_0] [i_0] [i_1] [i_0]))) << (var_6 - 1151680504081451559))), ((~((~(arr_3 [i_0] [i_1] [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_21 += ((((612713208 ? (min(var_17, (arr_7 [i_4] [i_2] [i_4] [i_3]))) : (var_18 >= var_6))) | ((((min(var_17, 0))) - (max(15805422105781333744, (arr_5 [i_0] [i_0])))))));
                                var_22 &= var_18;
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = ((((max((var_13 - var_0), ((var_12 ? var_5 : var_18))))) ? ((var_17 ? ((var_17 ? var_0 : -3558463175940138371)) : (0 != var_4))) : (((~var_6) ? ((var_4 ? var_14 : var_11)) : (0 | 10488)))));
    #pragma endscop
}
