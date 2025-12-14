/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= var_12;
    var_21 = ((((((max(var_4, var_14))) <= var_4)) && (((var_2 ? var_5 : var_11)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_22 -= var_7;
        var_23 = var_6;

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_24 = (max(var_24, ((max((((-(arr_4 [i_0] [i_1] [i_2])))), (((((arr_9 [i_0] [i_1] [i_2] [i_3]) ? var_12 : (arr_8 [i_0] [i_0] [i_0] [i_0]))) - (arr_5 [i_1] [i_0]))))))));
                        var_25 = (min(var_25, (arr_6 [20] [i_1] [i_1])));
                        var_26 *= ((~(arr_11 [i_3] [i_2])));
                        arr_13 [i_2] [i_0] [i_3] [i_0] = ((0 ? -6466266603695045258 : 1710585224));
                    }
                }
            }
            arr_14 [i_1] [i_1] &= (max(((var_5 << (((arr_3 [i_0] [i_1]) + 30478)))), ((max(var_8, ((((arr_12 [i_0] [i_0] [i_1] [i_1] [i_1]) | var_3))))))));
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        {
                            arr_25 [i_0] [i_6] [i_5] [i_5] [i_6] [i_7] = (arr_17 [i_6] [i_6] [i_6] [i_6]);
                            arr_26 [i_6] [i_6] = ((((max(-4696080756353690007, 4294967293))) < (arr_10 [9] [i_4])));
                        }
                    }
                }
            }
            var_27 = (min(var_27, (arr_2 [i_4])));
            arr_27 [i_4] [i_4] [i_4] = (arr_10 [i_0] [i_4]);
        }
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            arr_31 [i_0] &= max(-var_0, (arr_29 [i_0] [i_8]));
            var_28 = (arr_19 [i_0] [i_8] [i_8] [i_8]);
        }
    }
    var_29 = ((-var_1 ? var_17 : ((var_5 >> (var_12 + 4830253334066357399)))));
    #pragma endscop
}
