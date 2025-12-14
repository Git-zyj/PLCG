/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 23392;

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_18 = (max(var_18, ((((-(!var_5)))))));
        arr_2 [i_0] [4] = ((-(!-var_13)));
        arr_3 [1] [i_0] = (!-19467);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 20;i_3 += 1)
            {
                {
                    var_19 = var_7;
                    var_20 |= (!-var_4);
                    var_21 = var_10;
                    var_22 |= var_2;
                }
            }
        }
        var_23 &= (!-var_3);
        var_24 *= (~var_4);
    }
    var_25 = var_9;
    var_26 = (!var_9);
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 16;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 16;i_7 += 1)
                    {
                        {
                            var_27 &= ((!(!var_0)));
                            var_28 = (min(var_28, var_5));
                            arr_21 [i_4] [i_4] [i_4] [i_7] = (!var_6);
                        }
                    }
                }
                arr_22 [7] [i_4] &= (~var_16);
                arr_23 [i_4] [i_4] = var_1;
                var_29 |= var_15;
            }
        }
    }
    #pragma endscop
}
