/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= var_15;
    var_19 = (-57 || 268435455);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    var_20 = (arr_4 [i_0] [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] &= (((18446744073441116160 | (arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] [i_2 - 1]))));
                                var_21 = -24927;
                                arr_13 [i_0] [i_1] [i_1] [i_2] [i_2] [i_4] = ((~(((arr_1 [i_4]) ? 0 : (((arr_3 [i_0] [i_0] [i_0]) ? (arr_10 [i_0] [i_0] [i_1] [i_0] [i_3] [i_4]) : (arr_6 [i_0] [i_0] [i_0])))))));
                            }
                        }
                    }
                    var_22 = (!((min((arr_7 [i_0 + 2]), (arr_2 [i_2] [i_2] [i_0])))));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_18 [i_0] [i_0] [i_0] [i_0] = ((!((((arr_5 [i_0 + 1]) ? var_8 : (arr_1 [i_0 + 1]))))));
                    var_23 += ((18446744073441116160 ? ((((((arr_15 [8]) ? -1 : var_0))) % ((2386181220 & (arr_5 [i_5]))))) : (((-1 | ((min(26445, 26100))))))));
                    var_24 = ((((((arr_11 [i_0] [i_0] [i_0 + 2] [i_0 + 2]) | 61594))) ? ((((arr_11 [i_0] [i_0] [i_0 - 1] [i_0 - 1]) ? (arr_11 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 2]) : 39088))) : (max(var_17, (arr_11 [i_0 - 1] [i_0 - 1] [i_0 + 3] [i_0 + 2])))));
                }

                /* vectorizable */
                for (int i_6 = 1; i_6 < 12;i_6 += 1)
                {
                    arr_23 [i_0] = (((arr_20 [i_0 + 2] [i_0] [i_6 + 1]) - (arr_20 [i_0 + 1] [i_0] [i_0])));
                    arr_24 [i_0 - 1] [i_0 - 1] [i_6 - 1] [1] &= var_13;
                }
                var_25 &= (-(max((53519 / 24937), 13992251982733919593)));
            }
        }
    }
    #pragma endscop
}
