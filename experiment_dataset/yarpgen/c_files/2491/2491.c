/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 = (((((((arr_7 [i_0] [i_1] [i_1] [i_1]) != (1 * var_4))))) < var_4));
                    var_20 = (max(var_20, (((var_11 * ((((!(arr_1 [2] [i_2 - 1]))))))))));
                    arr_9 [1] [i_1] [i_0] = (max(((min((var_2 < 113), var_14))), (arr_6 [i_0] [i_1])));
                }
            }
        }

        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_21 = (arr_11 [i_0] [3]);
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        {
                            arr_21 [i_0] [i_0] = ((-(((var_16 < 7) ? (var_7 || 1) : ((min((arr_18 [i_0] [i_0]), 113)))))));
                            var_22 = (arr_19 [i_0] [i_5 - 2] [i_4] [i_0] [i_5 - 2]);
                            var_23 = var_14;
                        }
                    }
                }
            }
            var_24 = (min((arr_18 [i_0] [i_0]), ((((min(var_14, (arr_4 [i_0] [i_0] [i_0])))) == 1))));
        }
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        arr_24 [i_7] = (8648292961402321258 > var_18);

        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                arr_30 [i_8] [i_8] [i_8] = var_14;
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            arr_38 [i_7] [19] [15] [i_8] [i_11] = var_17;
                            var_25 = 8648292961402321264;
                        }
                    }
                }
                var_26 = var_5;
            }
            arr_39 [i_8] [i_8] [i_7] = (((arr_18 [i_7] [i_8]) | (((((((arr_33 [i_7] [i_7] [i_7] [i_7]) - 103))) > ((var_2 | (arr_37 [i_8] [0] [i_8] [1] [i_7]))))))));
        }
        var_27 = (max(var_27, (((-((9798451112307230357 | (!6))))))));
        var_28 = (((((arr_0 [i_7] [i_7]) % (var_13 | var_1))) >= (arr_29 [i_7] [i_7] [16])));
    }
    var_29 = var_18;
    #pragma endscop
}
