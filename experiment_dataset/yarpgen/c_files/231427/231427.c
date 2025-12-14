/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_19 *= (arr_1 [i_0] [i_0]);
        var_20 = (max(var_20, 59964));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_21 = (min(var_21, (((var_5 ? (!var_8) : -var_11)))));

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_8 [i_2] = (((14124998137550146558 ? 7 : 4159077804)) << (4321745936159405058 - 4321745936159405051));
            var_22 ^= ((((arr_1 [i_1] [i_1]) || var_15)));
            arr_9 [i_2] = (((1360814984987306728 / (arr_7 [i_1] [i_2] [i_2]))));
        }
    }
    var_23 = (-17 ^ 622572539);
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            {
                var_24 = -1739949516;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        {
                            var_25 = (min((arr_19 [i_3] [i_3] [i_6]), (arr_14 [i_3] [i_4 - 1] [i_6])));
                            arr_20 [i_4] [i_3 + 1] = ((~var_8) / (min((arr_13 [i_3 + 1]), (arr_13 [i_3 + 1]))));
                        }
                    }
                }
                var_26 += ((((var_17 * var_8) ^ (0 - 4321745936159405057))));
            }
        }
    }
    #pragma endscop
}
