/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (((var_4 ? var_12 : var_1)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    var_14 = ((!(((-12894 ? var_7 : var_7)))));
                    var_15 = ((~(~1136964076)));
                    var_16 ^= var_12;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_11 [i_3] [i_3] [i_1 + 2] [i_3] = (((max(var_10, -var_2))) ? (max(var_0, (~2002428955))) : var_1);
                                var_17 = ((~(0 | 36028797018898432)));
                                var_18 = ((~((var_0 ? var_2 : 1))));
                                arr_12 [i_0] [i_0 - 2] [i_0 - 1] [i_0] [i_2] [i_3] [10] &= var_4;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_19 &= (((((((0 ? 32745 : var_7))) || var_0)) ? ((min(var_10, var_1))) : 5849367203453289072));

                            for (int i_7 = 2; i_7 < 18;i_7 += 1)
                            {
                                var_20 = 3813176238;
                                var_21 = (~var_1);
                                arr_22 [i_0] [i_1] [10] [i_6] [i_7 - 2] [i_5] [i_7] = ((((max(56, var_3))) ? (((var_9 - var_8) - var_4)) : (var_8 >= var_4)));
                            }
                            for (int i_8 = 2; i_8 < 19;i_8 += 1)
                            {
                                var_22 |= (((((var_11 ? 9223372036854775807 : ((var_12 ? var_3 : -136945417017073973))))) ? (~var_0) : -33554176));
                                arr_25 [i_0] [i_5] [19] = (max(22, (!var_6)));
                                var_23 = (((~var_4) ? (~var_0) : var_2));
                            }
                            var_24 = (!var_6);
                            var_25 |= 9223372036854775789;
                        }
                    }
                }
                arr_26 [i_0] [i_0] = min((var_5 * var_6), (((!((min(var_5, var_12)))))));
            }
        }
    }
    #pragma endscop
}
