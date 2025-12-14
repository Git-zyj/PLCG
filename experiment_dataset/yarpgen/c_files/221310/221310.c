/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_1 [i_0 + 1]) - (arr_1 [i_0 - 1])))) ? (arr_1 [i_0 - 1]) : (arr_0 [i_0 + 1])));
        arr_3 [i_0] = (min(17113767759564796780, 17113767759564796781));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            arr_6 [i_0 + 1] [i_1] = var_10;
            arr_7 [i_1] = (!var_6);
        }

        for (int i_2 = 3; i_2 < 22;i_2 += 1)
        {
            arr_11 [i_0 - 1] = (((max(1, 17113767759564796782)) == (31337 && -106)));
            var_11 = (-32767 - 1);
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            arr_15 [i_0] [i_3] |= ((~((((arr_12 [i_0 - 1] [i_0 - 1]) >= (arr_12 [i_0 + 1] [i_0]))))));

            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                var_12 = (arr_10 [i_0] [i_3]);
                arr_18 [i_0] [i_0] [i_0] [i_0] = ((var_10 ? -5985 : var_1));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_13 = (arr_5 [i_5] [15]);
                            var_14 = var_2;
                            var_15 = (((((arr_20 [i_0 - 1]) ? (arr_20 [i_0 - 1]) : (arr_20 [i_0 - 1])))) ? (((arr_20 [i_0 - 1]) % (arr_20 [i_0 - 1]))) : ((((arr_20 [i_0 - 1]) <= (arr_20 [i_0 + 1])))));
                        }
                    }
                }
                arr_24 [i_4] [i_3] [i_0] = (arr_22 [i_4]);
                var_16 = (max(var_16, var_4));
            }
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_27 [i_0] [i_7] [i_0] = var_10;
            var_17 = (arr_17 [i_0] [11] [i_7]);
        }
    }
    var_18 = ((!(((1332976314144754835 ? var_5 : 89)))));
    var_19 = ((var_10 ? (((11919861709327790768 ? -637604473 : var_6))) : ((((max(var_3, var_1))) ? var_8 : ((var_7 ? var_1 : var_9))))));
    #pragma endscop
}
