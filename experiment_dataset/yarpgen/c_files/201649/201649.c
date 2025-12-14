/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((((var_10 | (~var_3)))), (((var_8 | var_3) ? var_2 : var_4))));
    var_14 *= var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [3] = (1010775202 > 178);
                var_15 = (((((max(var_1, var_10)) == -var_1)) ? var_9 : var_5));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_13 [i_3] [i_3] [i_0] [i_3] = ((max(var_1, var_3)));
                            var_16 = 81;
                            var_17 = ((81 || (3743079357525426833 != 2016397595)));
                            var_18 = (((((var_4 ? var_11 : var_2))) ? ((var_12 ? var_9 : var_1)) : var_11));
                        }
                    }
                }
                var_19 = (!32);
            }
        }
    }
    #pragma endscop
}
