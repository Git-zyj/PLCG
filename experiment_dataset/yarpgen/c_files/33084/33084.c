/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = ((+(max((var_19 % var_14), 50955))));
                var_21 = (min(var_3, (((min(5554818158684071739, 8)) * (((((arr_5 [i_0] [i_0] [i_1]) < var_5))))))));

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_22 += (max(((min((arr_2 [i_2 + 1]), (arr_2 [i_2 - 1])))), var_16));
                                var_23 &= (max((arr_0 [i_2 - 1] [i_0 + 2]), var_3));
                                var_24 = (arr_3 [i_1]);
                            }
                        }
                    }
                    var_25 = (min(var_25, 5554818158684071739));
                }
                for (int i_5 = 0; i_5 < 0;i_5 += 1)
                {
                    var_26 = 0;
                    var_27 ^= (min((min(13510798882111488, 5554818158684071739)), (min(2582, 18446744073709551615))));
                    var_28 = (arr_11 [i_0] [i_1] [i_5] [i_5]);

                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        var_29 = (arr_1 [i_0 + 1]);
                        var_30 = (~(arr_13 [0] [i_1] [15] [5] [i_5 + 1] [i_1] [6]));
                        var_31 = (max(var_31, var_19));
                    }
                    var_32 = (max(var_11, (((arr_6 [i_5 + 1]) ? ((((arr_1 [i_0 - 1]) && (arr_5 [14] [i_1] [i_1])))) : (((12891925915025479877 >= (arr_4 [i_1]))))))));
                }
                /* vectorizable */
                for (int i_7 = 2; i_7 < 14;i_7 += 1)
                {
                    arr_23 [i_1] [i_1] = ((!(arr_12 [i_7 + 2] [i_7 + 1] [i_0 + 2] [16] [11])));
                    var_33 ^= var_4;
                    var_34 = (arr_4 [i_1]);
                }
                var_35 = ((-2576 & (arr_3 [i_0 - 1])));
                var_36 = ((var_9 & (((arr_21 [i_1] [i_0]) ^ (arr_6 [i_0 + 2])))));
            }
        }
    }
    #pragma endscop
}
