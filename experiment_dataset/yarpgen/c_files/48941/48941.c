/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 0;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = (min(var_17, ((max(6937523674088848525, ((min(0, (min(var_0, 255))))))))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    var_18 ^= ((-(((!((max(var_5, 0))))))));
                    var_19 ^= (max(((min(var_6, 52))), (min(var_2, var_4))));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                {
                    var_20 = (max(var_20, ((max((max(var_11, 2762)), (!var_6))))));
                    var_21 += (((min(-9, 1)) / var_2));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    var_22 = (max(var_22, var_3));
                    arr_15 [i_0] [i_1] [i_4] &= 18446744073709551612;
                    var_23 = var_6;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_4] [i_0] = -var_4;
                                var_24 = (max(var_24, -var_5));
                                var_25 -= var_1;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            {
                var_26 = ((var_0 ? var_8 : 2932113121));
                var_27 = (min((((max(55, -3937542185062138108)) == var_10)), ((var_9 <= ((min(var_1, var_7)))))));
            }
        }
    }
    #pragma endscop
}
