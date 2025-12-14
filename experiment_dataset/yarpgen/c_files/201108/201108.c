/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    var_15 = (min(var_11, var_6));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, (((-2660453456919659549 ? ((min(-305412812, var_4))) : ((var_12 ? (((2546272734 ? -15612 : -15))) : (min(2546272752, 55070)))))))));
                    arr_8 [i_2] [i_1] [i_1] [i_1] = (max((min(15, ((var_2 >> (var_2 - 165))))), ((var_8 ? (max(var_9, 15)) : var_0))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = (min(((-79 ? ((max(var_8, var_4))) : (min(var_2, var_7)))), (var_8 != 15)));
                                var_18 = ((~(!2546272734)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_2] [i_0] [i_0] [10] [i_0] = 51096;
                                var_19 += -2055780507708290016;
                                var_20 = (min(var_20, -1628514088626377412));
                            }
                        }
                    }
                    var_21 = ((((max(var_9, 48634))) ? -var_12 : ((var_12 ? (((var_9 ? 255 : var_10))) : var_6))));
                }
            }
        }
    }
    var_22 -= ((var_4 || var_11) << (var_8 + 20688506));
    #pragma endscop
}
