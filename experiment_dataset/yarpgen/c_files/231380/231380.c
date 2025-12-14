/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 46658;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 3; i_1 < 18;i_1 += 1) /* same iter space */
        {
            var_14 = ((~(18878 * var_2)));
            arr_5 [i_0] [i_0] = ((((((arr_2 [i_0] [i_1 - 3]) ? 18339273027209980412 : var_9))) ? 0 : ((46658 ? -32 : var_1))));
        }
        for (int i_2 = 3; i_2 < 18;i_2 += 1) /* same iter space */
        {
            var_15 = (max(var_15, (((max((((var_5 ? var_9 : 210))), ((18878 ? (arr_3 [i_0] [i_0] [i_2]) : (arr_1 [i_0]))))) ^ (((((97 ? var_7 : 46658)) & ((-123 ? 47 : 122)))))))));
            arr_9 [3] [i_0] [i_2] = ((-121 ? ((((var_9 ? 96 : var_11)))) : (((!(((var_6 | (arr_2 [i_0] [2])))))))));
            arr_10 [i_0] [i_2] [i_2 - 2] = (-((((max(0, 12914592316799176607))) ? (min(12914592316799176607, -123)) : (((94 ? 0 : 121))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_14 [i_0] [7] [i_3] = -2962299002805599966;
            var_16 = (!var_0);
            arr_15 [i_3] = 32;
        }
        arr_16 [i_0] [2] = ((((max((min(6418832879139495808, 0)), (65535 * 0)))) ? -3593258223237496624 : 46657));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        arr_26 [0] [0] [10] [i_7] |= ((68 ? (arr_8 [20] [i_7]) : 65535));
                        arr_27 [i_5] [4] [8] [i_7] = ((-11688 ? var_3 : (arr_8 [i_6] [18])));

                        for (int i_8 = 4; i_8 < 10;i_8 += 1)
                        {
                            var_17 = (!var_1);
                            arr_32 [i_8] [6] [i_8 - 3] &= -46658;
                        }
                    }
                    arr_33 [i_4] [i_5] [i_6] [i_5] = var_6;
                }
            }
        }
        arr_34 [i_4] [i_4] = 24;
    }
    #pragma endscop
}
