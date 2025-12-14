/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [4] [i_1] [i_2] = (min(((min(1, 17865))), ((var_16 + (arr_6 [i_1] [5] [i_2 - 2])))));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_11 [i_0] [4] [i_1] = (min((max(var_2, var_8)), (min(((1 ? 1 : 59704)), var_10))));
                        var_19 -= (1 <= var_5);
                        var_20 = (var_3 ^ 11807);
                        arr_12 [6] [i_3] [i_2] [i_3] [i_3] = 1048576;
                    }
                    arr_13 [i_1] = ((((~(min(-881566002, 59734)))) == (-2147483647 - 1)));
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_18 [12] = (min(-11808, -1));
        arr_19 [i_4] [i_4] = ((((1 ^ ((4 ? 2147483647 : 59687))))) ? (((-((min((arr_14 [i_4] [i_4]), 11808)))))) : (min((arr_17 [i_4] [i_4]), 3428088595)));
        var_21 = -0;
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_22 ^= (((3554017927 ? -23067 : 90707198)));

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_26 [i_5] [i_6] [i_5] = ((((((var_7 < var_18) ? (arr_25 [i_5] [i_5]) : var_6))) ? var_17 : var_16));
            arr_27 [i_5] = (max((min(8267210725655235452, var_18)), ((min(740949368, 1904087030)))));
        }
        /* vectorizable */
        for (int i_7 = 2; i_7 < 13;i_7 += 1)
        {
            arr_31 [i_5] [i_7] = -2147483647;
            arr_32 [i_5] [i_7] = ((var_16 ^ (arr_5 [i_5])));
            arr_33 [i_5] [i_7] [i_5] = var_1;
            arr_34 [i_5] [i_7] [i_7] = var_8;

            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                arr_38 [i_8] [i_7] [i_8] = (arr_28 [i_7 - 2] [i_7 + 1] [i_7 - 2]);
                var_23 = ((-(arr_15 [i_7 - 1] [i_7 - 1])));
            }
            for (int i_9 = 3; i_9 < 10;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    var_24 = 0;
                    arr_45 [i_7] = ((var_7 ^ (arr_5 [i_5])));
                    arr_46 [i_5] [i_5] [i_5] [i_7] = 246023353;
                    var_25 ^= var_6;
                    var_26 = arr_0 [i_7 - 2];
                }
                arr_47 [i_5] |= ((var_14 < (arr_44 [i_7 - 2])));
                var_27 = (arr_20 [i_7 - 2] [i_7 + 1]);
            }
        }
        arr_48 [11] = 1853534116;
    }
    #pragma endscop
}
