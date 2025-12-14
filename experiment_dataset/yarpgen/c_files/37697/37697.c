/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_10 = 9223372036854775807;
                        var_11 -= (arr_10 [i_0] [i_0] [i_2] [i_3]);
                    }
                }
            }
        }
        arr_11 [i_0] = (((arr_3 [i_0] [i_0] [i_0]) < var_3));
        arr_12 [i_0] = (!-var_7);
        var_12 = ((((((arr_8 [i_0] [i_0] [i_0] [i_0]) ? 13 : var_3))) ? ((2904350775 ? var_9 : var_8)) : ((((arr_8 [i_0] [i_0] [i_0] [18]) & (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_13 *= (((arr_2 [i_4]) | var_1));
        arr_16 [i_4] [i_4] = ((!(65526 + var_3)));
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_14 += (arr_4 [i_5] [i_5] [i_5]);
        var_15 = (-((((max((arr_17 [i_5]), (arr_1 [i_5])))) ? (57360 < var_5) : (min(var_9, 3576614416)))));
        var_16 *= 3876;

        /* vectorizable */
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            var_17 = (((!65535) | (arr_4 [i_6 + 1] [i_5] [i_5])));
            var_18 = ((8177 != (arr_9 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])));
            arr_23 [i_5] = (((arr_19 [i_6 + 1]) < (arr_19 [i_6 + 1])));

            for (int i_7 = 2; i_7 < 18;i_7 += 1)
            {
                arr_26 [i_5] [i_5] [i_5] [i_5] = 8185;
                arr_27 [14] [i_5] [i_5] [i_5] = (!0);
            }
        }
        /* vectorizable */
        for (int i_8 = 4; i_8 < 19;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                var_19 = (min(var_19, ((((arr_10 [i_8 + 2] [i_9] [i_8 + 1] [i_8 - 4]) ? 1 : (arr_10 [i_8 - 3] [i_9] [i_8] [i_8 - 2]))))));
                var_20 = (~1);
                var_21 |= (((arr_2 [i_8 - 4]) == (arr_25 [i_8 - 2] [i_8 - 1] [5] [i_8 + 2])));
            }
            var_22 = (arr_21 [i_5] [i_8 - 4] [19]);
            arr_34 [i_5] [10] = (arr_29 [i_5] [i_8] [i_8]);
        }
        /* vectorizable */
        for (int i_10 = 2; i_10 < 19;i_10 += 1)
        {
            arr_37 [i_5] [i_10] [i_5] |= (arr_6 [i_5] [23] [i_5] [i_10]);
            arr_38 [i_5] [i_5] = ((4551336785577603012 == var_6) | (arr_1 [i_5]));
            var_23 = 1;
        }
        arr_39 [12] &= (((arr_0 [1] [i_5]) ? (((arr_0 [i_5] [i_5]) ? (arr_0 [i_5] [i_5]) : (arr_0 [9] [i_5]))) : ((max((arr_0 [i_5] [i_5]), (arr_0 [i_5] [i_5]))))));
    }
    var_24 = 4763920438738086416;
    var_25 = ((var_0 == (((var_9 == ((8176 ? 0 : var_2)))))));
    var_26 = ((1 ? 1 : 8175));
    var_27 = (max(var_27, ((min(var_6, ((~((var_3 ? var_6 : var_8)))))))));
    #pragma endscop
}
