/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((((max(2700730488972870322, var_13) * var_8)))))));
    var_21 = (max((((var_15 + 2147483647) >> (var_0 <= var_5))), (~92)));
    var_22 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_4] = ((-((max(0, 92)))));
                                var_23 = (max(var_23, (4800358861649807952 >= 0)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_24 += ((((!((max(var_19, 71))))) ? 1865855533 : 0));
                            arr_21 [i_1] [i_0] [i_5] [i_6] [i_0] [i_1] = (((max((((arr_15 [i_0] [i_1] [i_5] [i_6]) ^ var_7)), 1)) <= 122));
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    arr_25 [i_0] [i_0] [i_0] [i_0] = ((((1 <= -2134992921) ? (var_5 | -91) : var_3)));
                    var_25 += var_1;
                    var_26 = (((max((~var_3), (arr_16 [i_0] [i_0] [i_0] [4])))) ? ((((arr_5 [i_0] [i_0]) < (var_1 * 32767)))) : (((((2700730488972870319 >> (var_18 - 62))) >= (((1 ? 164 : (arr_24 [i_0] [i_1] [i_7] [i_7]))))))));
                }
                arr_26 [i_0] [6] = ((arr_13 [10] [i_0] [i_1] [i_1] [i_1]) > (((arr_23 [i_0] [i_1] [i_1] [i_1]) ? ((var_11 ? var_16 : 25)) : var_15)));
            }
        }
    }
    var_27 = ((min((8156855617484303433 == var_0), 1330434482791995360)));
    #pragma endscop
}
