/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~var_0);
    var_16 = var_1;
    var_17 = ((+((((!16897218573434187493) == (var_8 != var_3))))));
    var_18 = var_11;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_19 |= var_5;
        var_20 ^= var_1;

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            var_21 = (((arr_3 [i_0]) / var_10));
            var_22 = (min(var_22, (arr_2 [i_0])));

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                var_23 *= -3243332589595964836;
                var_24 = ((-6192985130091320951 && var_14) ? (((arr_7 [i_0] [i_0] [i_0] [i_0 - 1]) ? (arr_5 [7] [i_1]) : -17)) : -24796);
            }
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                var_25 &= (~6747047250602891822);
                var_26 = ((-((~(max((arr_9 [i_0] [i_0] [0] [i_3]), (arr_8 [i_0] [i_1] [i_3])))))));
                var_27 = (max(var_27, (arr_5 [i_1 + 1] [i_0 - 1])));
                var_28 += ((((((4294967290 ? var_5 : var_10)))) ? var_8 : (((+(((arr_2 [i_1 - 1]) + var_3)))))));
                var_29 = var_5;
            }
            var_30 = var_3;
            /* LoopNest 3 */
            for (int i_4 = 4; i_4 < 7;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 8;i_6 += 1)
                    {
                        {
                            arr_18 [i_0] = (((var_4 & var_0) ? (arr_1 [i_0] [i_0]) : var_12));
                            arr_19 [i_0] = ((-(arr_5 [i_0 + 1] [i_6 - 2])));
                            var_31 &= ((-((var_13 ? var_2 : 10567364936490535711))));
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 2; i_7 < 17;i_7 += 1)
    {
        arr_23 [i_7] = (max(((((arr_20 [i_7 + 2]) - var_5))), (arr_22 [i_7])));
        arr_24 [16] = ((-((var_11 ? (!var_11) : (((!(arr_21 [i_7 + 2]))))))));
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        arr_27 [5] &= ((((((~var_3) ? 0 : (arr_21 [i_8])))) || var_2));
        arr_28 [i_8] = (~var_0);
        arr_29 [i_8] = (((24798 != 1559178228) != -1559178228));
    }
    #pragma endscop
}
