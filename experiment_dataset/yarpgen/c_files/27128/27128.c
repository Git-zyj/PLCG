/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((~(min((~var_2), (max(64, 971940067)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = (min(var_16, var_7));
        arr_4 [i_0] = (!1);
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] [i_1] = 3323027229;
        var_17 &= (-2147483647 - 1);
        arr_10 [i_1] [i_1] = ((!(((8703271792326560432 * (!-22913))))));
        var_18 = (min(var_18, 238989934));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 12;i_2 += 1) /* same iter space */
    {
        var_19 = (max(var_19, ((((arr_12 [i_2 - 1]) <= (arr_8 [i_2 + 1]))))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 13;i_4 += 1)
            {
                {
                    var_20 = (min(var_20, 27928));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_21 = (arr_15 [i_2]);
                                var_22 ^= 1;
                            }
                        }
                    }
                    var_23 -= (arr_6 [i_3]);
                }
            }
        }
        var_24 = (min(var_24, ((((arr_23 [i_2] [i_2] [i_2] [i_2 + 2] [i_2 + 2] [i_2]) & 9)))));
    }
    var_25 *= (max((((36028797018963968 != (var_6 <= -6)))), ((1 ? 1 : (!-9223372036854775807)))));
    #pragma endscop
}
