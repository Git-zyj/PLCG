/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = 1533104223;
                arr_6 [i_0] [i_1] = var_15;
            }
        }
    }
    var_17 = (((((var_9 ? var_15 : (!var_15)))) ? ((((min(var_8, var_7))))) : var_14));
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            {
                var_18 ^= ((12333310152704361270 & ((((max(var_15, var_3)))))));
                arr_13 [1] = (((((((((arr_12 [i_3] [i_3]) ? 23668 : 5))) ? ((var_12 ? var_1 : var_10)) : var_1))) || (961618427 + var_9)));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            arr_18 [i_4] [i_5] [i_4] = (((var_4 ? ((min(var_11, var_15)) : ((var_15 ? -1 : var_9))))));
                            var_19 = 9223372036854775807;
                            arr_19 [i_2] [i_2] [i_5] [i_5] = 0;
                            var_20 = (((((!(~var_5)))) != var_9));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
