/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((var_8 ? (var_13 / 49913) : var_1)) << (var_8 - 205)));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = (7784888945298316855 & -2565748652911972627);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_7 [10] [4] [12] = 2147483647;
            var_21 = (arr_1 [i_1]);
            arr_8 [i_0] = var_6;
        }
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_22 = (((((-18131 + 2147483647) >> (-18131 + 18133))) % -var_2));
                        var_23 = ((~(31545 | var_2)));
                        var_24 = (min(var_24, (((((((!(arr_6 [i_4] [i_4]))))) | (((arr_10 [i_4] [2] [i_0]) | (arr_14 [i_4] [i_2 + 1] [i_2 - 2]))))))));
                    }
                }
            }
            var_25 = (max(var_25, ((((-2565748652911972650 - var_8) + (((((arr_6 [i_0] [i_2]) > (arr_6 [i_2] [i_0]))))))))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    {
                        arr_20 [6] [i_5] [i_2] [i_0] = (arr_12 [i_2 - 1] [i_2 - 1]);
                        var_26 = (((arr_10 [0] [0] [i_2 - 2]) || ((!(arr_12 [2] [i_2 - 1])))));
                    }
                }
            }
            var_27 = -9223372036854775793;
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                {
                    var_28 = var_6;
                    arr_26 [7] = ((-18131 ? ((13136 % (-32767 - 1))) : (((-(arr_1 [i_8]))))));
                }
            }
        }
    }
    var_29 = (~0);
    var_30 += ((-(~var_14)));
    #pragma endscop
}
