/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (max(((~((var_8 ? var_10 : var_4)))), ((((min(-521210389, var_6))) ? (max(var_1, var_3)) : (max(var_6, var_1))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_12 = (min(var_12, (arr_5 [20])));
                        arr_11 [i_0] [i_0] [i_2] [i_3] = ((~((((max(var_1, var_5)) <= ((var_0 ? var_8 : (arr_0 [i_1]))))))));
                    }
                }
            }
        }
        var_13 = var_3;
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_14 ^= (max((59687 < 1196811037), ((-30180 ? (((var_6 ? var_9 : var_8))) : (min(var_1, (arr_15 [i_0])))))));
                    var_15 &= (max((arr_0 [i_0]), (arr_2 [i_5] [i_4])));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_16 *= (min(162, 70));
                                var_17 ^= (((((((var_4 ? 162 : var_3)) + 72))) ? (((4941 % var_9) ? (~var_8) : var_10)) : ((-521210385 ? var_2 : (arr_4 [i_6 + 1] [i_7] [i_4 - 2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 -= (max(var_6, var_4));
    #pragma endscop
}
