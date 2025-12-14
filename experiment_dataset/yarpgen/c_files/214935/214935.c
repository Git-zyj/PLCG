/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_18 = (((max(17550671124087650231, -17117)) != (min(((101 ? 13330893830340121239 : (arr_2 [i_0] [7]))), (((~(arr_0 [i_0] [i_0]))))))));
        var_19 &= ((!((((((9075 ? 1 : 17547709855203272704))) ? ((-32751 ? (arr_1 [4]) : -32743)) : (arr_2 [1] [i_0]))))));
        arr_3 [i_0] = (((((((32729 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) > (arr_1 [i_0])))) & (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        var_20 -= ((-(max(((638973136 ? 32752 : 140)), (arr_1 [4])))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        var_21 -= (!-32745);
        var_22 = ((~(arr_7 [i_1 - 2])));
        var_23 = (max(var_23, (32729 <= 119)));
        var_24 = (~1);
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_25 = (max(((~(arr_0 [7] [i_2]))), (((!(arr_9 [i_2] [i_2]))))));
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    {
                        var_26 = (((((0 ? ((((arr_15 [i_2] [i_2] [i_4] [i_2]) ? 2863668580 : 70))) : (min(8227951549536646805, (arr_14 [i_2] [i_2] [i_2] [i_2] [i_2])))))) ? (-103 % -121) : (((!(var_7 / 638973136))))));
                        var_27 -= ((var_10 ? (((((arr_0 [i_2] [i_2]) <= (((arr_15 [i_2] [i_3] [8] [i_5]) ? var_0 : var_3)))))) : ((26690 ? ((0 ? var_7 : (arr_9 [14] [i_3]))) : (arr_1 [i_4])))));

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            arr_18 [i_6] [i_5] [i_2] [i_3] [i_2] = (max((~var_0), (-81 != -104)));
                            var_28 = (min(var_28, ((((1 ? 6 : -1728000063)) >> (((max(((246 ? 31 : 136)), var_1)) - 515296679))))));
                        }
                    }
                }
            }
        }
        var_29 = ((~((((arr_0 [11] [3]) > ((9047076395232387670 ? 56 : (arr_1 [i_2]))))))));
    }
    var_30 = ((((~0) % var_9)));
    #pragma endscop
}
