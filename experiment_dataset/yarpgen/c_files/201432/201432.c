/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [1] [i_0] [i_2] = (!var_9);
                    var_12 = ((3415664962916137312 ? -3415664962916137342 : -13));
                }
            }
        }
    }
    var_13 = (((~-var_5) >> (((!(!var_7))))));
    var_14 = var_10;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    var_15 = (((((var_10 ? var_1 : var_2))) ? (((-((var_11 ? var_11 : var_8))))) : (max(-var_3, -var_6))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_16 = var_9;
                                arr_20 [i_3] [5] [i_5] [i_3] [i_7] [i_7] [i_7] = 200;
                            }
                        }
                    }
                    var_17 = (var_9 ? -var_0 : var_6);
                    var_18 = (((max(((var_8 ? var_10 : var_6)), (max(200, 3415664962916137307)))) / ((~(min(var_9, var_8))))));
                    var_19 = -var_7;
                }
            }
        }
    }
    #pragma endscop
}
