/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = arr_0 [i_0];
        var_10 = ((((((~var_3) <= (var_8 >= 0)))) <= (((arr_1 [i_0]) ? ((var_6 ? (arr_1 [i_0 - 3]) : var_4)) : (arr_1 [i_0])))));

        /* vectorizable */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                arr_9 [i_2] [10] [i_2] [i_2] = (3192097983 && 4294967295);
                var_11 = (((~var_1) % (arr_8 [i_0] [0])));
                var_12 = ((-(arr_7 [i_2])));
            }
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                var_13 = (((((-991591400 ? 3 : 3314594090))) - 3));
                var_14 = ((0 << (155 - 94)));
            }
            var_15 = ((!(arr_11 [i_0] [i_0 - 3] [11])));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_16 = (((min(0, 980373184)) >= ((((((var_6 ? 4 : 11882498579074653502)) <= (!4294967295)))))));
            var_17 = 4294967293;
            var_18 = ((var_0 ? 1102869313 : (((14 ? 0 : 3192097973)))));
            arr_16 [i_0] = (+-6998842082596433258);
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {
                    arr_26 [i_5] [i_6 - 1] = (((((var_5 - (arr_18 [i_7])))) != var_7));
                    var_19 = (min(var_19, ((max((max((arr_22 [i_6 + 1]), (((arr_19 [i_6 - 1] [i_5]) ? 0 : var_6)))), (~2044))))));
                }
            }
        }
        var_20 = var_4;
    }
    var_21 = var_3;
    var_22 = var_4;
    var_23 = ((!((((((58841 ? 2056 : 4))) ? var_7 : var_4)))));

    /* vectorizable */
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        arr_30 [i_8] [i_8] = (((arr_29 [i_8]) / (~9423)));
        var_24 -= var_4;
        var_25 = var_9;
    }
    #pragma endscop
}
