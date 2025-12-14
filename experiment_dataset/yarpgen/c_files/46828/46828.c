/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!var_11);

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 = 7575;
                    var_19 += 9343294554993268377;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        var_20 -= ((((!(arr_14 [i_0] [i_3] [i_5] [i_0] [i_5]))) ? ((((((max(15682, 54282))) != (-7575 - -7459))))) : (((((min(36241, -1484)))) * 10149484384261002442))));
                        var_21 += (arr_2 [i_0] [i_0]);
                        arr_15 [i_0] [i_4] [i_3] [i_0] = ((1 ? ((min((arr_8 [i_0] [i_0] [i_0]), (arr_8 [i_0] [i_0] [i_0])))) : (arr_1 [i_0])));
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {

        /* vectorizable */
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            arr_22 [i_7] = ((var_16 >> (((arr_2 [i_6] [i_7]) - 166))));
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    {
                        var_22 = (var_14 / 1);
                        arr_28 [i_6] |= 42379;
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            arr_31 [i_6] = var_10;
            var_23 = ((((!(arr_23 [i_6]))) ? var_5 : (((arr_23 [i_10]) ? (arr_23 [i_10]) : (arr_23 [i_10])))));
            var_24 = ((17500447499616662381 ? -7575 : 29300));
        }

        for (int i_11 = 3; i_11 < 11;i_11 += 1)
        {
            var_25 *= ((+(((arr_18 [i_11 - 3]) ? (arr_18 [i_11 - 3]) : 8408433893728880136))));
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {
                        {
                            var_26 = (192 == -7553);
                            arr_43 [i_6] [i_11 - 2] [i_11] [i_11] [i_11 - 2] [5] [i_11] = 41632;
                        }
                    }
                }
            }
            var_27 = (min(var_27, (((4505577352208772818 >> (-7221271535915276849 + 7221271535915276877))))));
            var_28 = var_12;
        }
        arr_44 [i_6] |= (arr_40 [i_6] [i_6] [i_6] [i_6] [i_6]);
        arr_45 [i_6] = -1082052122401803319;
    }
    var_29 = (((max(var_15, (var_3 >= var_15))) % var_1));
    #pragma endscop
}
