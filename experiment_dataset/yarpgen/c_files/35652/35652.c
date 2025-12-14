/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_3));
    var_18 = var_3;

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {
                        {
                            arr_11 [i_0] [1] [0] [0] [i_0] [11] = ((-8 ? (var_4 && -1) : (((arr_6 [i_2] [i_2] [13]) ? var_16 : var_15))));
                            var_19 = 906773390;
                        }
                    }
                }
            }
            arr_12 [i_1] = (((arr_9 [2] [2] [3] [i_0] [2] [i_1]) ? (!var_2) : ((var_12 ? var_9 : 15))));
            var_20 = (max(var_20, (((!(arr_10 [i_0 + 1]))))));
        }
        arr_13 [9] &= (((arr_3 [11]) & var_2));
        arr_14 [i_0] = (var_4 / -104);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                {
                    arr_20 [i_6] [i_5] [i_0 + 1] = 20;
                    arr_21 [i_6] [i_5] [i_0 - 2] = ((!(!-5671386061925173153)));
                }
            }
        }
    }
    var_21 = var_9;
    #pragma endscop
}
