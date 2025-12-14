/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -1440646704;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_17 = ((~(((arr_8 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] [i_3] [i_0]) ? -1 : (arr_6 [i_1 + 1] [i_0 + 1] [i_2])))));
                            arr_9 [i_0] [i_1] [i_1] [i_3] [i_1] [i_3] = 2357137371;
                            var_18 *= ((1720393478 > (min(var_12, 2147483647))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    var_19 *= (min(((5172858676951548558 / (arr_0 [i_0] [i_0 - 3]))), ((min(var_1, var_11)))));
                    var_20 += (min(1023, (((1219036071 ? 1127022602 : (arr_5 [i_0] [i_1 - 1] [i_0]))))));
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_21 ^= 6537169042502422186;
                                var_22 &= min((max(((6537169042502422186 ? -6537169042502422186 : (arr_11 [i_6]))), -6537169042502422187)), (arr_11 [i_0]));
                                var_23 = max(var_2, (((var_1 < (arr_7 [i_1 - 1] [i_0] [i_0 + 1] [i_0])))));
                                var_24 = ((8 ? var_2 : ((var_15 ? var_6 : (arr_8 [i_0] [i_0 - 3] [i_1 + 2] [i_0 - 3] [i_1] [i_1 - 1])))));
                                var_25 = ((-((min(var_3, var_0)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = -6537169042502422186;
    #pragma endscop
}
