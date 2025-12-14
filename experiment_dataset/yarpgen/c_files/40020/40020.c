/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_17 = -28132;
        arr_4 [i_0] = -978593957958580774;

        /* vectorizable */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_15 [i_1] [i_1] [i_2 + 1] = (((arr_0 [i_0]) ? ((5896434765651949668 + (arr_11 [i_0] [i_2] [i_3]))) : (arr_5 [i_0] [i_1 - 1] [i_3])));
                        var_18 = (max(var_18, ((((var_2 + 2147483647) >> (var_15 - 2621386774077191230))))));
                    }
                }
            }
            arr_16 [i_1] [i_1] [i_1] = ((15605172240042200966 ? var_7 : 28132));
        }
    }
    for (int i_4 = 1; i_4 < 19;i_4 += 1) /* same iter space */
    {
        var_19 = ((0 ? 2 : 1463396868));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            var_20 += var_3;
                            var_21 *= 4611267803425757180;
                        }

                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            var_22 = (max(var_22, (((min(89, var_6))))));
                            arr_32 [i_4 + 2] [i_7] [i_6] [i_4 + 2] [i_9] = ((~(((max(10109636666734043739, -896354923)) / ((max(var_1, (arr_27 [i_9] [i_7] [i_6] [i_4] [i_4]))))))));
                            var_23 = (min(var_23, ((-(((arr_18 [i_4 + 1]) | (arr_18 [i_4 + 2])))))));
                            arr_33 [i_7] [i_7] [i_6] [10] [i_6] [i_6] = (((((~(arr_20 [i_4 + 2] [i_4 + 2])))) ? ((-(arr_17 [i_4 - 1]))) : (((!(arr_21 [i_4 - 1] [9] [i_4 - 1]))))));
                            var_24 = (min(var_24, (((max(13056830089659042769, (((-1696412549 ? 1141052421760539149 : 2)))))))));
                        }
                        arr_34 [4] [i_5] [i_5] [i_5] |= (((!((max((arr_30 [i_4] [i_5]), -28155))))));
                    }
                }
            }
        }
        var_25 *= ((-((max(var_10, (arr_20 [i_4] [i_4 - 1]))))));
        var_26 = (min(var_26, ((max((166 || 9), (arr_26 [i_4] [i_4] [i_4] [i_4] [i_4 + 2]))))));
        arr_35 [4] [i_4] = ((max((arr_29 [i_4 + 2] [10] [10] [i_4] [i_4 + 2]), (arr_29 [i_4] [i_4] [4] [i_4] [i_4]))));
    }
    for (int i_10 = 1; i_10 < 19;i_10 += 1) /* same iter space */
    {
        var_27 = (min(var_27, (2841571833667350650 == var_12)));
        arr_38 [i_10] = ((((~154) ? (-94291503 ^ var_0) : (arr_23 [i_10] [i_10] [16] [i_10 + 2]))));
    }

    for (int i_11 = 0; i_11 < 21;i_11 += 1)
    {
        /* LoopNest 3 */
        for (int i_12 = 3; i_12 < 17;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 21;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 20;i_14 += 1)
                {
                    {
                        var_28 = ((~(arr_39 [i_11])));
                        var_29 = ((((65527 ^ 170429052) | var_13)));
                        var_30 &= ((+(((arr_27 [i_14] [i_12 - 1] [i_12 - 3] [i_14 - 2] [i_13]) ? (-993454704 || -56) : ((-56 ? var_9 : var_12))))));
                    }
                }
            }
        }
        var_31 = (min(var_31, (((var_2 ? ((-((min((arr_47 [i_11] [20] [i_11] [i_11] [20]), var_10))))) : ((-(170429052 == var_4))))))));
    }
    for (int i_15 = 1; i_15 < 11;i_15 += 1)
    {
        var_32 = ((-(arr_25 [3] [3] [i_15] [i_15])));
        var_33 = (40858 / 15729901600707557126);
    }
    #pragma endscop
}
