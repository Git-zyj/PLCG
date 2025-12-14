/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_11 = (arr_1 [i_0]);
        arr_3 [i_0] [i_0 + 1] = (((arr_2 [i_0 + 1]) / (((arr_0 [i_0 - 1]) ? ((((arr_1 [i_0 + 1]) ? -86 : var_2))) : (705046716 / var_3)))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {
        var_12 = (25 != -86);
        var_13 = (arr_4 [i_1 - 2]);
        arr_7 [i_1] = var_8;
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_14 = (((((~(arr_10 [i_2])))) ^ ((3589920552 & (((~(-127 - 1))))))));
        arr_11 [i_2] = var_7;
    }
    var_15 = ((((((var_8 != ((var_6 ? 3758635893 : 3589920605)))))) != var_7));

    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        arr_14 [i_3] = (((((0 != (arr_8 [i_3]))))));

        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            arr_19 [i_4] [i_3] = ((-12 ? (-127 - 1) : -1649055113));

            /* vectorizable */
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                var_16 = (((var_0 != 3589920579) ? var_4 : (3589920580 != -86)));
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        {
                            var_17 += (((((var_3 ? (arr_20 [i_3] [i_4 - 1] [i_5] [i_6]) : (arr_5 [12] [i_3])))) ? ((((645198180 != (arr_13 [i_3]))))) : ((8323072 ? (arr_25 [i_3] [i_4] [i_5] [i_4] [i_7]) : 3589920580))));
                            arr_27 [i_3] [i_3] [10] [i_3] [i_3] [i_7] [i_3] = (arr_9 [i_4 - 1]);
                        }
                    }
                }
            }
            var_18 = (((-66 | 3589920580) != var_6));
            var_19 = ((0 != ((min(((~(arr_21 [i_4 + 1] [i_4] [i_4]))), ((~(arr_17 [i_3]))))))));
            arr_28 [5] [i_4 + 3] = 4294967295;
        }
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            arr_31 [i_3] [3] [i_8] = (-89 != 1649055112);
            arr_32 [5] [i_3] |= var_5;
            var_20 |= (((arr_24 [0] [0] [6] [i_3] [i_8]) / (1649055122 / 591226185)));
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_11 = 1; i_11 < 10;i_11 += 1)
                        {
                            arr_41 [i_3] [i_3] [i_9] [i_3] [i_11] = (arr_25 [i_3] [4] [i_3] [i_10] [i_10]);
                            var_21 *= (((arr_16 [i_11 + 1] [i_10]) ? (arr_18 [i_8] [i_10] [3]) : (((var_9 != (arr_30 [i_3] [i_10]))))));
                            arr_42 [i_3] [i_3] [i_9] [i_10] [i_11] = (((arr_16 [2] [i_11 + 1]) ? (((var_3 && (arr_20 [i_3] [i_8] [i_9] [i_9])))) : -22));
                            arr_43 [i_9] = (arr_13 [i_3]);
                            arr_44 [11] [i_11] [8] [i_10] [i_11] [i_9] [i_10] = ((((var_6 != (arr_26 [i_3] [i_3] [i_8] [i_9] [i_10] [i_11] [i_11])))));
                        }
                        arr_45 [i_9] [i_8] [i_9 + 2] [i_10] [i_10] [i_3] |= 3537323177;
                        var_22 = (((arr_40 [i_9 + 1] [i_8]) ? ((+(((arr_17 [i_10]) ? (arr_39 [i_8] [i_8] [i_9 + 2] [i_10] [i_8] [i_3] [i_9 + 2]) : (arr_26 [i_10] [i_10] [i_9] [i_8] [i_8] [i_3] [i_3]))))) : ((((-1 != (arr_30 [6] [i_9])))))));
                    }
                }
            }
        }
    }
    var_23 = ((((var_1 != ((var_1 ? var_0 : -105))))) / var_4);
    #pragma endscop
}
