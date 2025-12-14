/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_1 - 1] = ((((((3740531903 & 12106676933162517584) ? 834282037 : (((arr_1 [i_0]) ? var_1 : (arr_0 [i_0 - 1])))))) ^ (max(834282037, ((var_1 ? var_10 : (arr_0 [i_1 - 1])))))));
            arr_7 [i_0] [i_0] = var_5;
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_12 |= ((!(12925 == -1207935971)));
            var_13 = (arr_0 [i_0]);
        }
        var_14 = ((var_5 ? (((max(14957, (!4))))) : var_9));
        var_15 *= (((((((((arr_4 [i_0 - 2]) ? (arr_2 [i_0 - 2]) : (arr_4 [i_0])))) ? 0 : var_9))) ? ((var_7 ? (var_7 == var_6) : ((var_1 ? (arr_9 [i_0] [i_0]) : var_7)))) : ((((var_6 ? var_9 : var_10))))));
        arr_12 [12] [12] &= arr_2 [i_0 + 1];
    }
    for (int i_3 = 4; i_3 < 22;i_3 += 1)
    {
        arr_15 [i_3] [i_3] = (((((~(arr_14 [i_3])))) ? (((arr_14 [i_3 - 1]) / (((arr_14 [i_3]) ? 25142 : var_11)))) : var_7));
        var_16 ^= ((((-((var_11 ? var_2 : 1)))) ^ (((((arr_14 [i_3 - 3]) ? (arr_13 [i_3] [i_3]) : var_1))))));
        arr_16 [i_3] = var_3;
    }
    var_17 -= var_5;
    var_18 = var_6;

    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            var_19 |= 12106676933162517584;
            var_20 = (min(var_20, var_10));
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                var_21 = 3612673492;
                arr_31 [i_4] [i_4] [i_4] = (arr_26 [i_7] [i_7] [i_7]);
            }
            var_22 -= (arr_25 [i_4] [i_4]);

            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                arr_35 [i_8] [i_6] [i_4] = (arr_30 [i_8] [i_6] [i_4]);

                for (int i_9 = 4; i_9 < 15;i_9 += 1)
                {
                    var_23 = (min(var_23, ((((arr_10 [i_8] [i_8]) && 834282038)))));
                    var_24 = (((~((var_0 << (25142 - 25117))))));
                }

                /* vectorizable */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    arr_41 [i_4] [i_4] [i_10] [i_4] [i_4] [i_4] = ((-var_8 ? ((var_8 ? var_4 : 1704)) : -var_7));
                    arr_42 [i_4] [i_4] [i_8] |= (arr_20 [i_10]);
                    arr_43 [i_4] [i_10] [i_10] [i_10] = ((((((arr_32 [i_6] [i_6] [i_6]) ? var_6 : var_0))) || (((var_9 ? var_8 : var_4)))));
                    var_25 = ((var_7 != ((-(arr_2 [i_6])))));
                    arr_44 [i_4] [i_10] [i_4] [i_10] [i_10] = 5317889542877820307;
                }
            }
        }
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            arr_47 [i_4] [i_4] = ((-(arr_19 [i_11])));
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 12;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        {
                            var_26 *= (((((590384567 ? -64 : 129))) ? (arr_2 [i_13 + 1]) : (arr_30 [i_13 + 1] [i_13] [i_13 - 3])));
                            var_27 = (~811475227);
                        }
                    }
                }
            }
        }
        arr_55 [i_4] = (arr_38 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]);
    }
    #pragma endscop
}
