/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (max(((min(53569, 81))), ((((max(var_5, 1))) ? var_12 : ((-50 ? var_13 : 53979))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = max((max((max(var_8, 480)), (max(var_8, 1)))), (((58 ? var_12 : 727865416))));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_2] [i_2] = 4579716101382506212;
                    var_16 &= (min(1, -1903774466));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = (max(((min(-174109853, 16382))), (~7912738445176030115)));
                    var_17 = 14575500191705980505;
                }
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    var_18 = ((-(min(((1520301543 ? 55314 : -100)), (~var_0)))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 0;i_5 += 1)
                        {
                            {
                                var_19 = (max(-248, var_9));
                                arr_18 [i_0] [i_0] [i_3] [i_4] [i_5] = ((42 ? (((min(var_1, -54)))) : ((var_2 ? (min(var_5, 15698661783460465013)) : var_2))));
                                var_20 = ((-((min(17179869183, 0)))));
                            }
                        }
                    }
                }
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    var_21 = (max(var_21, ((min(-var_5, var_8)))));
                    arr_23 [i_0] [i_1] [i_0] [i_0] = ((6839740819835065245 ? var_11 : var_5));
                }
            }
        }
    }
    var_22 = (3194612841964665147 ? ((-var_13 ? 6393475819113412365 : (min(1846230372653639274, 11607003253874486382)))) : ((min(var_5, var_3))));
    #pragma endscop
}
