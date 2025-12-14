/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (20556 + -20535);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [8] = 20556;
                            arr_12 [i_0] [6] [2] [i_0] = (((-33776997205278720 / (15223957786834062539 * 7176))));
                        }
                    }
                }
                arr_13 [i_0] [i_1] = (arr_10 [i_0] [i_0] [i_0] [5] [i_0]);
                arr_14 [i_0] = 1151;
                var_17 += (arr_2 [i_0] [i_0] [i_0]);
            }
        }
    }
    var_18 = 124387400;
    var_19 = -27221;

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_19 [i_4] [i_4] = -3936980399731710703;
        arr_20 [1] = (min((arr_18 [i_4]), 1));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_20 -= (1 + -15028);
        var_21 ^= (~20556);
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        arr_27 [i_6] = -2113742718;
        arr_28 [i_6] = (~-103);
        arr_29 [i_6] = (min(((~((58360 << (248 - 236))))), (min(((225371928 ? -225371928 : 248)), ((-1470657235012876120 ? (arr_18 [i_6]) : -225371955))))));
        arr_30 [i_6] = (((min(0, 1))));
    }
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        arr_34 [i_7] = (min(3936980399731710710, -28070));
        var_22 = min((--26119), (arr_31 [i_7] [i_7]));
    }
    var_23 = ((((min((!1), var_3))) << var_3));
    #pragma endscop
}
