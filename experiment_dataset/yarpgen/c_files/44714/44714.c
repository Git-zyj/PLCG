/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 3;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_13 = (-2147483647 - 1);
        var_14 = 19269;
        var_15 &= (((((-1245 ? (-2147483647 - 1) : var_11))) ? -3198 : (arr_0 [i_0])));
        var_16 = (min(var_16, ((~(arr_0 [i_0 - 1])))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_17 = 2453335099;
        var_18 = ((((-((29149 ? var_7 : -9223372036854775782)))) < -10414));
        arr_5 [i_1] [i_1] = (arr_3 [i_1]);
        var_19 = (-9223372036854775807 - 1);
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    var_20 = ((8853918609748403218 ? -15911 : 0));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                arr_15 [8] [i_2] [i_5] &= ((+((+((-8853918609748403221 ? (arr_7 [i_4]) : 0))))));
                                var_21 = (arr_11 [i_3] [i_2 - 1] [i_2] [i_2]);
                                var_22 = 2453335078;
                                var_23 = (((arr_3 [i_1]) < (var_3 < -15598)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = ((var_9 ? (((3 ? (3006540168 % var_8) : var_5))) : (var_6 - var_4)));
    var_25 = 1567461409984402370;
    #pragma endscop
}
