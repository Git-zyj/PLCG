/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_1;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_2] = ((+(min((((arr_4 [i_0 + 1] [i_2 + 4]) ? var_14 : -7764588387132303343)), ((((arr_7 [i_0]) >= var_2)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_3] [i_2] = (max(var_17, var_9));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] = (arr_0 [i_1]);
                            }
                        }
                    }
                    arr_16 [5] [i_2] [i_2] = -var_13;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 9;i_6 += 1)
                        {
                            {
                                var_20 = ((((max((arr_1 [i_0] [i_0]), (arr_6 [i_5])))) ? 1 : 3121590658));
                                arr_22 [i_6] [i_5] [i_2] [i_5] [i_6 - 1] = (min(((~(var_12 | var_3))), (((var_0 <= ((var_1 ? 7764588387132303337 : (arr_3 [i_1] [i_0 + 1]))))))));
                            }
                        }
                    }
                    var_21 = var_10;
                }
            }
        }
    }
    var_22 ^= (min(((((max(var_2, var_0)) != (var_16 != var_8)))), ((~(var_0 + var_14)))));
    var_23 = (((var_15 < var_2) ? var_1 : var_5));
    #pragma endscop
}
