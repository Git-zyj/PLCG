/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(0, (((var_2 < -126) ^ (min(var_1, var_1))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = (arr_3 [i_0] [i_1] [i_2]);
                    var_17 = ((-var_7 ? -1 : (arr_2 [1])));
                }
            }
        }

        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_18 *= ((((((var_11 ? var_13 : var_7)))) ? -1 : -118));
            var_19 = ((var_8 <= (arr_5 [i_3] [i_3] [i_0])));
            var_20 = ((!((var_3 <= (arr_2 [i_0])))));
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            arr_13 [8] [i_4] [i_4] = 32767;
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    {
                        var_21 *= (114 != 254);
                        var_22 = ((377068231 ? (var_2 / -1) : ((248 ? (((arr_4 [i_0] [i_0] [i_5]) << (((arr_11 [3] [6]) - 3555424946)))) : (arr_10 [i_4] [i_4] [i_4])))));
                        arr_20 [i_4] = (!var_4);
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            {
                arr_27 [i_7] [6] = 250;
                var_23 = (arr_26 [i_7] [i_7]);
                arr_28 [i_7] [i_8] = ((17598045415711203859 ? 0 : 18446744073709551615));
            }
        }
    }
    var_24 = (~32456);
    #pragma endscop
}
