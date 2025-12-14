/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_13));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_18 = var_3;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_19 += ((((0 ? 27 : -0)) % (min(var_13, ((var_13 ? var_2 : var_9))))));
                                var_20 = (max((min(var_11, var_5)), -var_7));
                                arr_14 [i_0] [i_0] [i_2] [i_0] [i_4] = ((((max(var_5, var_5))) ? (~var_15) : (min(var_6, (var_3 == var_4)))));
                                arr_15 [i_0] [i_0] = ((-((max(var_2, var_6)))));
                            }
                        }
                    }
                    var_21 = (max((var_1 == var_4), ((var_7 ? (max(var_9, var_4)) : var_15))));
                    var_22 = ((!((max(var_2, var_6)))));
                }
            }
        }
    }
    var_23 = var_8;
    #pragma endscop
}
