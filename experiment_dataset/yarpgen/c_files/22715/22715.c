/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_14 += (!-3);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_15 = (max(var_15, var_8));
                            var_16 = var_7;
                            var_17 = (max((((14822970495236446100 & 6097047713949514955) ^ 1)), var_7));
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 1; i_4 < 20;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            arr_16 [i_4] [i_4 + 2] [i_5] = ((3631148781 ? -32756 : (min(0, 6097047713949514932))));
            /* LoopNest 3 */
            for (int i_6 = 2; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        {
                            var_18 = (min(-var_11, ((var_1 ? (arr_15 [i_4]) : var_4))));
                            var_19 = var_9;
                        }
                    }
                }
            }
            var_20 = (arr_24 [i_4 + 2] [i_4 + 1] [i_4 + 2] [i_5] [i_5]);
            var_21 = var_8;
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        var_22 = var_1;
                        var_23 = ((-1 && ((!(var_4 % -898653711184779287)))));
                        arr_30 [i_4] [i_5] [i_9] [i_10] = (!var_7);
                    }
                }
            }
        }
        for (int i_11 = 2; i_11 < 20;i_11 += 1)
        {

            /* vectorizable */
            for (int i_12 = 3; i_12 < 21;i_12 += 1)
            {
                var_24 = -var_7;
                var_25 ^= var_9;
                var_26 = ((var_4 && (arr_32 [i_12 - 2] [i_4] [i_12])));
                var_27 = ((var_13 & (arr_17 [i_4 - 1] [i_4] [i_12 + 1])));
            }
            var_28 = ((12349696359760036661 > (var_5 != 295403232)));
        }
        var_29 = (max((var_0 <= var_4), (max(295403232, 285833825))));
        var_30 = (min(var_30, ((((max(var_4, (var_2 ^ var_11))) >> (7844 - 7844))))));
    }
    var_31 += var_10;
    #pragma endscop
}
