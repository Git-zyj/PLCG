/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (((var_1 ? 7556144098472572387 : var_13)));
                    arr_6 [i_1] [i_0] [i_2] = ((var_14 ? var_11 : (var_12 * var_14)));
                    var_19 &= var_10;
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((max(var_12, (max(var_7, 7556144098472572404)))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    var_20 = (min(var_20, ((~(!var_1)))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_25 [i_4] [i_4] [i_4] [i_6] [i_7] = ((7556144098472572421 ^ 467714159373891202) < var_14);
                                arr_26 [i_3] [i_4] [i_6] [i_3] = ((1 >> ((((467714159373891220 ? 7556144098472572387 : (1 ^ 3455729595600730166))) - 7556144098472572357))));
                                var_21 = ((((30032 ? (~467714159373891220) : (!6039926595205568349))) - (((var_17 ? var_9 : var_11)))));
                                arr_27 [i_4] [i_5] [i_4] [i_7] = (min(var_15, var_13));
                                arr_28 [i_3] [i_4] [i_7] = ((-((((var_10 && var_17) == (var_2 >= var_9))))));
                            }
                        }
                    }
                }
            }
        }
        arr_29 [i_3] [i_3] = (!var_10);
        arr_30 [i_3] = (3172249311776203423 >= var_17);
    }
    #pragma endscop
}
