/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_13 = (!-1932426680);

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_14 = ((~(arr_3 [i_0])));
            var_15 = (arr_4 [i_1]);
            arr_5 [i_1] = 1932426676;
            arr_6 [i_0] [i_1] [i_1] = (1 || var_7);
            arr_7 [i_0] [i_0] [i_0] |= (((!1932426675) ? (((-(arr_1 [i_0])))) : (1932426680 & 4503599627370495)));
        }
        for (int i_2 = 3; i_2 < 16;i_2 += 1)
        {
            arr_11 [i_2 - 1] [i_0] &= (((arr_3 [i_2]) ? var_0 : ((-112 ? 33650 : (arr_10 [i_2])))));
            /* LoopNest 3 */
            for (int i_3 = 3; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_16 = (arr_16 [i_0] [i_2 - 2] [i_4 + 1] [i_4] [i_0] [i_5]);
                            var_17 -= (((arr_13 [i_5] [i_4 + 2] [i_3 - 3] [i_2 - 1]) ? var_7 : 1));
                            var_18 -= 2560827736;
                            var_19 = (arr_1 [i_3 - 3]);
                            var_20 = 1433153951;
                        }
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
    {
        var_21 = (max(var_21, (((9 | (min(var_0, var_0)))))));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 14;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    {

                        for (int i_10 = 1; i_10 < 16;i_10 += 1)
                        {
                            var_22 = (arr_10 [i_10]);
                            var_23 = ((~((~((1 ? (arr_3 [i_7]) : 5622526079967216939))))));
                            arr_33 [i_6] [i_6] [i_6] [i_6] [i_9] = 219083783514561565;
                            var_24 = (arr_30 [i_9] [i_10 - 1] [i_8] [i_8 - 2] [i_9]);
                        }
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            var_25 = var_9;
                            var_26 = (((((-1932426671 ? (12177822489228659846 < var_10) : (((34482 && (arr_2 [i_11]))))))) ? var_5 : (arr_15 [i_8 - 2])));
                        }
                        var_27 = (min(var_7, 3682128452066875853));
                    }
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 23;i_12 += 1)
    {
        var_28 = (max(var_28, (((((min((arr_36 [i_12] [i_12]), (arr_38 [i_12] [i_12])))) - (arr_37 [i_12]))))));
        /* LoopNest 3 */
        for (int i_13 = 4; i_13 < 21;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 23;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 23;i_15 += 1)
                {
                    {
                        var_29 = (((((-((min(19799, 1)))))) * (((arr_47 [i_12] [1] [21] [i_15]) ? ((1 ? -9 : 0)) : var_6))));
                        arr_49 [i_15] [i_14] [i_13 - 3] [i_15] = ((((579193203 ? 13 : (((31067 ? 4294967278 : -1932426659))))) > 1));
                        arr_50 [i_12] [i_15] [i_14] [i_15] = (max(((-(arr_44 [i_12] [i_13 - 3]))), (!1)));

                        for (int i_16 = 0; i_16 < 23;i_16 += 1)
                        {
                            var_30 += ((~(arr_43 [i_16] [i_13 + 2])));
                            var_31 = (max(var_31, (arr_51 [i_14] [i_15] [i_14])));
                            var_32 = ((!(((-1932426676 ? var_5 : (arr_37 [i_13 - 3]))))));
                        }
                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 23;i_17 += 1) /* same iter space */
                        {
                            var_33 = 0;
                            arr_57 [i_12] [i_12] [i_12] [i_13 - 3] [i_14] [i_15] [i_15] = (((var_5 ? var_4 : 13693426388563727183)) * var_9);
                        }
                        /* vectorizable */
                        for (int i_18 = 0; i_18 < 23;i_18 += 1) /* same iter space */
                        {
                            var_34 = (((arr_54 [i_12] [i_13]) > var_9));
                            var_35 = (min(var_35, ((((var_9 & 6268921584480891769) ? (arr_59 [i_12] [18] [i_14] [i_18] [i_18] [i_15] [i_14]) : (arr_47 [i_18] [i_15] [i_13 + 2] [i_12]))))));
                            arr_61 [i_14] [i_15] [i_14] [i_15] [i_18] = 443045757;
                            arr_62 [i_12] [i_15] [i_14] [i_15] [i_18] = (~1);
                        }
                    }
                }
            }
        }
        arr_63 [i_12] [i_12] = ((var_11 ? var_8 : var_3));
        var_36 = (min((min(((max((arr_47 [i_12] [i_12] [i_12] [i_12]), (arr_45 [i_12] [i_12] [i_12])))), 6914)), (((var_11 < (arr_37 [i_12]))))));
    }
    for (int i_19 = 1; i_19 < 18;i_19 += 1)
    {
        var_37 &= (arr_38 [i_19] [i_19]);
        var_38 = ((-(arr_44 [i_19 + 3] [i_19 + 1])));
    }
    var_39 -= var_4;
    #pragma endscop
}
