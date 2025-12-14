/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 = (((arr_0 [i_0] [i_0]) | 4427779));
        var_15 = 775997373;
        var_16 = (min(var_16, (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            var_17 = var_9;
            var_18 = (min(var_18, ((((((var_9 ? var_10 : 1))) && (((var_8 ? var_7 : 43461))))))));
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_19 = 3714204727;
            var_20 = (max((((arr_7 [i_1] [i_1] [i_1]) ? (arr_7 [i_3] [10] [i_1]) : var_2)), (arr_7 [i_3] [i_3] [i_1])));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        var_21 = arr_9 [i_5] [i_3];
                        arr_18 [i_3] [i_3] |= 3714204727;
                        var_22 |= (((~var_11) ? (((max(22078, var_0)) + (((2771804769654081871 ? 22074 : 0))))) : (((((min(var_3, (arr_8 [i_1] [i_3] [1])))) << (arr_8 [i_1] [i_3] [i_4]))))));
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    {
                        arr_26 [21] [0] [i_1] [0] [21] [i_1] = ((!(22078 > 43461)));
                        var_23 = var_10;

                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            var_24 = (min(var_12, ((255 * (((var_11 >> (786432 - 786415))))))));
                            arr_30 [i_1] [i_1] [i_1] [i_8] [i_9] = ((+-1) ? 32851 : (((1 != ((55492 ? 255 : var_8))))));
                            var_25 = (max(var_25, ((((arr_17 [i_1] [i_6] [i_7] [i_7 - 3] [i_7 - 2] [i_7 + 3]) % 1)))));
                            arr_31 [i_1] [i_1] [i_1] [i_7] [i_1] [i_9] = (min(((max(1, 1))), (min((arr_21 [9] [i_8] [i_8] [i_7 + 1]), (arr_8 [i_7 + 2] [i_1] [i_7])))));
                        }
                        for (int i_10 = 3; i_10 < 21;i_10 += 1)
                        {
                            arr_34 [i_1] [10] [10] [i_1] [i_10] = ((max(var_0, var_12)));
                            arr_35 [i_1] [i_8] [i_6] [i_6] [i_1] = (arr_28 [i_1] [i_1] [i_6] [i_7] [i_8] [i_10]);
                            arr_36 [i_10 + 1] [i_8] [i_1] [i_6] [i_1] = (((((arr_33 [i_1] [i_8] [i_7] [12] [i_6] [i_1] [i_1]) ? var_4 : var_10))));
                            arr_37 [i_1] [i_10] [i_10] [i_10] [i_10] = arr_25 [i_7];
                        }
                    }
                }
            }
            var_26 = var_2;
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    {
                        arr_43 [i_1] [i_1] [i_1] [4] = 786432;
                        arr_44 [i_1] [i_11] [i_1] [i_1] = ((255 ? 23 : var_12));
                        var_27 = (min(var_27, 1));
                    }
                }
            }
            var_28 = ((~(549755813887 ^ var_2)));
        }
        arr_45 [i_1] [i_1] = 30089;
        var_29 = (((((0 % (arr_29 [i_1] [i_1] [i_1] [i_1] [19] [i_1] [i_1])))) ? (((arr_29 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) ? (arr_29 [i_1] [15] [i_1] [i_1] [i_1] [i_1] [i_1]) : (arr_29 [1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))) : (arr_29 [i_1] [15] [i_1] [i_1] [i_1] [i_1] [i_1])));
        arr_46 [1] [i_1] = (((133 & var_0) << ((((35425 ? var_9 : 0)) - 28552))));
        arr_47 [i_1] = (min(24, (((191307484 != (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [18]))))));
    }
    var_30 = (max(var_5, -68110623941823435));
    #pragma endscop
}
