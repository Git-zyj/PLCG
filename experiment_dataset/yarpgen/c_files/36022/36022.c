/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_8 ? (((1 >> (-23 + 36)))) : (min(473279912616720363, 91))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 = ((~((var_1 & (!var_10)))));
        var_19 = (!((((((62692 + (arr_1 [i_0])))) ? (arr_2 [i_0]) : 482882908))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_20 = (((arr_1 [i_2]) > ((((arr_1 [i_2]) || (arr_1 [i_2]))))));
            var_21 = 3476906830;
            var_22 -= ((((((arr_7 [i_1] [i_2]) ^ var_3))) ? ((((((10934689323989914735 ? (arr_5 [i_2]) : (arr_0 [i_2])))) ? -var_12 : var_7))) : (7 / -2044684726)));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {
                        var_23 = (arr_11 [i_3] [i_3] [i_3] [i_3 - 1] [i_4]);
                        var_24 = var_5;
                        var_25 = (min(var_25, (((-((127 / ((4294967288 ? (arr_10 [i_1] [i_2] [i_3 - 1] [i_4]) : (arr_6 [i_3 - 1]))))))))));
                        arr_13 [i_1] [i_2] [i_3] [i_4] = ((((~(max(var_0, 3569609333)))) >> (var_1 + 52)));
                        var_26 = var_16;
                    }
                }
            }
            var_27 = 2044684731;
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {

            /* vectorizable */
            for (int i_6 = 1; i_6 < 17;i_6 += 1)
            {
                var_28 = (1 != 17986);

                for (int i_7 = 4; i_7 < 15;i_7 += 1)
                {
                    var_29 *= ((-(arr_12 [i_7 + 3] [i_5] [i_1] [i_6 + 1])));
                    arr_21 [i_6] [i_6] [i_6 - 1] [14] [i_6] [i_5] = var_2;
                }
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    arr_25 [i_1] [i_1] [i_5] [i_1] [i_1] = ((var_9 ? 473279912616720385 : -var_5));
                    var_30 = (arr_4 [i_6 + 1] [i_8]);
                }
            }
            var_31 += min((((6 ? 77 : 16688))), (arr_19 [i_1] [i_1] [16] [i_5]));
        }
        var_32 = ((var_10 % ((-((min((arr_4 [i_1] [i_1]), var_8)))))));
        var_33 = ((-5804559728071377788 ? ((var_1 ? (arr_24 [i_1] [i_1] [0] [16] [i_1] [i_1]) : ((-1 ? -6 : (arr_5 [i_1]))))) : ((max((arr_6 [i_1]), (max(var_8, var_0)))))));
        var_34 -= ((var_9 || (((~((0 ? (arr_20 [i_1] [i_1] [0] [i_1]) : 4186609835)))))));
    }
    #pragma endscop
}
