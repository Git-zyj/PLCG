/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_1, ((-631952956 ? 26695 : 876308518))));
    var_15 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] = var_4;

                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_0] [4] [i_2] [i_3] &= (~((52420 ? var_10 : (arr_0 [i_0 + 1]))));
                        arr_11 [i_0] [i_0] [i_2] [i_1] = (arr_7 [i_3 + 1] [i_0 - 2] [i_0]);
                        arr_12 [i_1] [9] [i_0] [i_3] = ((var_2 != (((((((arr_0 [i_1]) >> (876308502 - 876308461)))) ? var_6 : (arr_9 [i_0 - 1]))))));
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        arr_16 [i_0 - 2] [i_1] [i_1] [i_1] [0] [i_2] = (min((!var_5), ((((min(var_10, (arr_4 [i_0] [i_1] [i_4])))) ? ((min(-1760203962, 3729320482285948990))) : -1648347708594477918))));

                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            var_16 = ((-(((!(var_13 / -876308521))))));
                            var_17 = (min(var_17, (((((((-(min((arr_18 [i_0] [i_1] [i_1] [i_1] [3] [i_1]), 63)))) + 2147483647)) >> (33554431 || var_0))))));
                            var_18 = ((!((((arr_8 [i_0 - 1] [i_0] [i_1] [i_0] [i_0]) ^ var_12)))));
                            arr_21 [i_1] [i_0] [i_2] [1] [i_0] [i_4] = (((arr_4 [i_5] [i_2] [10]) * var_6));
                            var_19 = (min(47362, 1));
                        }
                        arr_22 [i_0] [i_1] [i_0] = (((var_8 ? (arr_8 [i_0] [i_1 + 2] [i_1] [i_4] [i_1 + 2]) : (arr_8 [i_4] [i_2] [i_1] [i_0] [i_0]))) + (arr_15 [i_0] [i_0 + 1] [13] [i_0]));
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            var_20 = (max(var_20, (((((((min(-26685, -876308518)) / ((var_3 + (arr_17 [i_0 + 1] [i_1] [i_2] [i_2 + 1] [i_6] [i_7])))))) == ((-15461820168224232895 << (((min(var_11, 255)) - 215)))))))));
                            arr_29 [i_0] [i_1] [i_7] = ((((min(((var_3 ? var_12 : (arr_3 [i_0] [i_1 + 3]))), (((arr_20 [i_7] [i_2] [i_2] [i_6] [i_7] [i_2] [i_6]) << var_6))))) ? (var_0 != var_11) : (arr_8 [i_0] [i_0 + 1] [i_1] [i_0] [i_0])));
                            var_21 = (arr_27 [i_0] [i_1] [i_2] [i_6]);
                            var_22 = ((!(((~(((!(arr_8 [i_7] [i_1] [i_1] [i_1] [i_0])))))))));
                        }
                        var_23 = (max(var_23, (!-4261412865)));
                    }
                    var_24 = (~-13);
                }
            }
        }
    }
    #pragma endscop
}
