/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((var_0 % var_10) > (((((max(177, 1)))) ^ (max(var_7, var_6))))));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = 172;
        var_18 = (((arr_0 [i_0]) >= (min(((227 ? (arr_0 [i_0]) : 227)), (((~(arr_1 [i_0] [15]))))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            arr_16 [i_4] [i_1] [i_1] [i_1] = ((((max(((var_7 + (arr_11 [i_3] [i_4]))), ((8021681990188434487 ? 8 : (arr_8 [i_1] [i_1] [i_3])))))) ? (arr_3 [i_1] [i_1]) : (((arr_10 [i_1] [i_3] [i_3]) / (arr_3 [i_2 + 2] [i_1])))));
                            var_19 = (((min((arr_8 [i_2] [i_2] [i_2]), (min(var_14, 156)))) ^ (~29655)));
                        }
                    }
                }
                var_20 *= (arr_0 [i_1]);
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        {
                            var_21 = (((((78 > var_14) ? -196 : (arr_9 [i_1] [16] [16]))) <= (min(0, 99))));
                            arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (min((min(9820932307637024289, 1)), ((max((arr_1 [i_2 - 1] [i_5 + 1]), (arr_1 [i_2 + 4] [i_5 - 1]))))));
                            arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] [0] = ((((max(var_15, var_14))) ? 4669630600599245305 : -var_7));
                        }
                    }
                }
            }
        }
    }
    var_22 = ((min(((var_2 ? var_8 : var_16)), (var_13 >= var_1))));
    #pragma endscop
}
