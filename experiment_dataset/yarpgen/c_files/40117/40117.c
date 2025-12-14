/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += (min(((var_2 ? var_10 : var_11)), var_11));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 *= ((var_5 ? 150 : 150));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_21 = (min(var_21, (~var_5)));
                                var_22 = (min(var_22, (((-(((arr_5 [i_2]) >> (((arr_7 [i_0 - 1] [i_3 + 4]) - 5182724607456011375)))))))));
                            }
                        }
                    }
                    var_23 = ((((min(0, var_16)) * ((max((arr_1 [i_0]), (arr_6 [i_0] [i_0] [i_0 + 1] [i_0] [i_2])))))));
                }
            }
        }
        var_24 -= ((+(((arr_0 [i_0]) & (arr_2 [i_0 + 1] [i_0 - 1] [i_0 + 1])))));
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    {
                        var_25 -= (max(var_8, (arr_6 [i_5] [i_5] [i_5] [i_7] [i_7])));
                        var_26 = (max(var_26, var_8));
                        var_27 = (min(var_27, 25106));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 11;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 9;i_12 += 1)
                        {
                            {
                                var_28 = (min(var_28, (((var_14 & (var_16 * -1))))));
                                var_29 |= ((((((!(arr_20 [i_11] [i_11 - 1] [i_11 - 1] [i_11 + 1] [i_11]))))) + (arr_25 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 + 1])));
                                var_30 -= 65535;
                                var_31 &= ((((((105 ? 1 : 651978978)))) ? (!var_8) : (((-var_5 <= (((max(var_6, (arr_14 [i_10] [i_11 + 2]))))))))));
                                var_32 ^= ((((max(var_9, (!0)))) ? (((((min(var_16, var_6))) >> (((~var_2) + 16539))))) : var_5));
                            }
                        }
                    }
                    var_33 = (max(var_33, ((((-(arr_21 [i_9] [i_10])))))));
                }
            }
        }
    }
    #pragma endscop
}
