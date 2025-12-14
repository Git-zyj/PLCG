/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    var_16 &= ((var_14 || (max(0, var_11))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_2] = (arr_7 [i_1]);
                    var_17 ^= ((((((!9223372036854775807) - (arr_2 [i_1 - 1] [i_2])))) ? var_2 : ((var_4 ? (arr_1 [i_1 - 1] [i_1 - 1]) : 0))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_18 = ((~9223372036854775807) ? (((max((var_6 != var_3), (((arr_0 [2]) == var_5)))))) : (((arr_14 [i_0] [i_0] [7] [i_1 - 1] [i_4 - 2] [i_4 - 2]) / (arr_14 [i_0] [i_0] [6] [i_1 - 1] [i_4 + 1] [i_4]))));
                                arr_16 [i_0] [i_3] [i_2] [i_2] [i_3] [i_4 + 4] = (max(21, 32137));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 9;i_6 += 1)
        {
            {
                arr_23 [i_5] [i_6] = (max(4294967274, (16380 <= -5562638749674367125)));
                var_19 = ((((arr_15 [i_6] [i_6 - 2] [i_6 - 2] [i_6 + 1] [i_6 + 2]) <= var_13)));
                arr_24 [i_5] [0] [i_6] = ((~((-(((var_4 || (arr_11 [i_5] [0] [i_5] [i_5] [i_5] [i_6]))))))));
                var_20 = ((1822588680 << (7460601389617129504 - 7460601389617129475)));
            }
        }
    }
    #pragma endscop
}
