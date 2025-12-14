/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 *= (arr_2 [i_0]);
        arr_3 [i_0] = ((4294967295 ? ((((min(1, 30))))) : 17179869183));
        var_11 *= (((((min((arr_2 [i_0]), (arr_2 [i_0]))))) ^ ((18 ? (arr_1 [i_0]) : 8796093022207))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_12 = (((arr_2 [i_0]) % (arr_2 [5])));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_9 [i_1] = 511;
                var_13 = ((((!(arr_4 [i_1]))) ? ((4294967295 ? 18 : (arr_1 [i_0]))) : (arr_6 [i_1] [i_1] [i_1])));
            }
        }
        /* vectorizable */
        for (int i_3 = 3; i_3 < 19;i_3 += 1)
        {
            var_14 = (max(var_14, (((17 ? -1 : var_9)))));
            var_15 = (min(var_15, (18446744073709551615 % var_2)));
            var_16 = (arr_6 [i_0] [i_0] [i_3]);
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            arr_21 [8] [i_3] [i_4] [i_6] [i_5] [i_6] |= (((arr_19 [i_5] [i_5] [i_5] [16] [i_5] [i_6]) % (arr_19 [i_5] [i_5] [i_5] [i_5] [i_5] [i_6])));
                            arr_22 [i_0] [i_3] [i_4] [i_4] [i_0] [i_4] = ((1 ? (arr_10 [i_0] [i_3 - 1] [i_3]) : (arr_10 [i_3] [i_4] [i_3])));
                        }
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            arr_27 [i_0] = var_7;
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    {
                        arr_32 [i_8] [i_7] [i_8] [1] = (arr_4 [i_0]);
                        arr_33 [i_0] [i_8] [i_8] [i_0] [i_8] [i_0] = (!(((-((0 ? var_8 : 1))))));
                        arr_34 [i_0] [i_0] [i_0] [i_0] [i_8] = (((((var_6 >> ((((~(arr_15 [i_0] [i_8] [i_0]))) + 6))))) ? 255 : (((arr_6 [i_0] [i_7] [i_8]) ? -1 : var_2))));
                    }
                }
            }
        }
    }
    for (int i_10 = 4; i_10 < 19;i_10 += 1)
    {
        var_17 *= ((255 ? (min(-var_3, ((min(2147483647, 4294967295))))) : (((var_5 ? ((var_2 >> (65535 - 65523))) : ((127 % (-32767 - 1))))))));
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 19;i_13 += 1)
                {
                    {
                        arr_46 [i_13] [i_12] [i_12] [i_10] = 1;
                        arr_47 [i_12] [i_12] [i_12] [i_13] [20] = ((min(4294967295, (arr_35 [i_10 + 2]))));
                    }
                }
            }
        }
    }
    var_18 -= 255;
    var_19 = 0;
    var_20 = 127;
    #pragma endscop
}
