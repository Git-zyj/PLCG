/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        var_13 ^= ((((((!(((var_0 << (((var_12 + 1894004056) - 23))))))))) == (((arr_4 [1] [i_1] [i_0]) ? var_4 : (arr_7 [i_3] [8] [i_3 + 2] [i_3 + 3])))));
                        arr_8 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3] = ((-13354972726678610923 << (!var_5)));
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_14 += ((!(arr_10 [i_4])));
                        var_15 = (min(var_15, (~1)));
                        var_16 = ((~((((arr_7 [i_0] [i_1] [i_2] [1]) >= (arr_7 [i_0] [i_1] [i_2] [i_4]))))));
                    }

                    for (int i_5 = 4; i_5 < 16;i_5 += 1)
                    {
                        var_17 ^= (((-(arr_7 [i_5 + 1] [i_5 - 3] [i_5 - 1] [i_5 - 4]))));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            var_18 = 1;
                            var_19 = (!-var_3);
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 16;i_7 += 1)
                        {
                            arr_19 [i_0] [i_1] = ((~-1) || ((((arr_18 [i_0] [2] [i_0] [i_0] [i_0] [i_0] [1]) ? var_11 : -9553))));
                            var_20 = (arr_15 [i_0] [i_7 + 1]);
                            arr_20 [6] &= (~32767);
                            var_21 = (min(var_21, var_3));
                        }
                        var_22 = (((arr_11 [i_5 - 4] [i_5 - 1] [i_5 + 1] [i_5 - 2]) && var_12));
                        arr_21 [i_0] [i_0] [i_0] [8] = 12218704381270078371;
                    }
                }
            }
        }
    }
    var_23 = -var_9;
    var_24 -= -var_6;
    var_25 = (3623657035 << 1);
    #pragma endscop
}
