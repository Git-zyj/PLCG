/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;
    var_20 = ((((~32156) ? (~var_2) : ((var_8 ? 12169 : var_4)))));
    var_21 &= var_0;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_22 = (!4655824215870223833);

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            var_23 = ((~(arr_2 [i_0 + 1] [i_0])));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_24 = 41530;
                        var_25 = (((arr_8 [i_0 - 2] [i_1 - 1] [i_2 - 1] [i_1 - 1] [i_3]) ? 22618 : 126));
                        var_26 = (min(var_26, (((var_13 ? 41530 : (arr_6 [9] [i_1] [i_1] [i_1 + 3]))))));
                    }
                }
            }
            var_27 = (arr_6 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 2]);
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 15;i_5 += 1)
            {
                {
                    var_28 = (~12160);
                    var_29 = 1;

                    for (int i_6 = 4; i_6 < 17;i_6 += 1)
                    {
                        var_30 = (~2051609766);
                        var_31 ^= (((arr_5 [i_6 - 1] [i_4] [i_5 + 4]) ? (arr_5 [i_6 - 3] [i_4] [i_5 - 2]) : var_8));
                    }
                }
            }
        }
        var_32 = ((arr_15 [i_0 - 2] [i_0 - 1] [i_0] [i_0] [i_0 - 1]) ? (~-2007149894) : 2051609759);
        arr_17 [i_0] = 784960375;
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        var_33 = -49;
        arr_20 [i_7] = (((var_16 ? var_0 : 3959175652)));
        var_34 = (((!(arr_19 [i_7]))));
        var_35 += 1;
    }
    #pragma endscop
}
