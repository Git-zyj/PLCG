/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 4; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        {
                            arr_18 [i_4] [7] [8] [i_0] [8] [i_0] = ((+(((arr_13 [i_0] [i_1 + 2]) % var_3))));
                            arr_19 [i_4] [i_3 + 1] [i_2 - 2] [i_1 + 1] [i_0] = (arr_6 [7] [i_1]);
                        }
                    }
                }
            }

            for (int i_5 = 1; i_5 < 9;i_5 += 1)
            {
                var_18 = -var_11;
                var_19 = (min(var_19, var_13));
                var_20 = ((!(((~(arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
            }
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            var_21 = (((arr_21 [i_0] [i_0] [3] [i_0]) - var_14));
            var_22 ^= (((~-1289492895) != var_5));
        }
        var_23 += (((((var_11 ? ((((var_6 && (arr_9 [i_0]))))) : (~4294967277)))) ? (arr_2 [i_0] [i_0]) : ((var_5 << (((((arr_23 [i_0] [4]) | var_1)) - 19367))))));
        arr_26 [i_0] = var_9;
    }
    var_24 *= var_10;
    var_25 += min((max(var_1, (51908 || 4294967273))), var_1);
    var_26 = var_10;

    /* vectorizable */
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        var_27 = var_2;
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 10;i_9 += 1)
            {
                {
                    arr_33 [i_8 + 1] [0] [7] [i_7] = ((-((var_16 ? var_8 : var_14))));

                    for (int i_10 = 3; i_10 < 8;i_10 += 1)
                    {
                        arr_37 [i_7] [i_8] [i_7] [i_10] [i_10] [i_8 + 1] = var_4;
                        var_28 = ((1 ? -27251 : 32746));
                    }
                    for (int i_11 = 1; i_11 < 10;i_11 += 1)
                    {
                        arr_41 [i_11] [i_7] [1] [0] [i_9 + 1] = (var_4 ^ var_6);
                        var_29 = var_11;
                    }
                }
            }
        }
    }
    #pragma endscop
}
