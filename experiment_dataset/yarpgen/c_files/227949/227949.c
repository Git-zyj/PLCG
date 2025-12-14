/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_13 = ((((!(arr_1 [i_0 + 1])))));
        arr_2 [i_0] = (min(((((var_11 == var_9) == 15645114142673566961))), (((arr_1 [i_0 + 1]) / (-551604080 - var_11)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_14 = (((((arr_9 [9] [i_0 + 2] [i_0 - 1] [i_2]) || (arr_9 [i_0] [i_0 + 1] [i_0 + 2] [1]))) || ((min((arr_9 [i_0] [i_0 + 2] [i_0 + 1] [i_0 + 1]), (arr_9 [i_0] [i_0 - 1] [i_0 + 1] [i_3]))))));

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            var_15 = 18446744073709551615;
                            var_16 = (((~1) ? (((2083045397026975013 ? 3574998488 : 719968807))) : (max(((max(var_5, var_7))), ((var_1 ? var_8 : var_10))))));
                        }
                        for (int i_5 = 2; i_5 < 23;i_5 += 1)
                        {
                            var_17 = (max(var_17, 719968807));
                            var_18 = var_1;
                            var_19 += (((arr_8 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_5 - 2]) ? (((((min(var_9, (arr_8 [i_0] [i_0] [i_0] [i_0 - 1]))))) & var_1)) : ((((!((min(var_3, 719968807)))))))));
                        }

                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 23;i_6 += 1)
                        {
                            arr_20 [i_0] [i_1] [i_2] [i_1] [3] = (-(arr_15 [i_0] [i_1]));
                            var_20 = var_8;
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_21 = (((arr_12 [i_0 + 2] [i_1] [i_2] [i_3] [i_1]) ? (arr_18 [i_0 + 2] [i_7] [i_2] [i_3] [i_7]) : 719968807));
                            var_22 = (arr_9 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]);
                        }
                        var_23 = (max(-34, (arr_19 [i_0] [i_1])));
                        var_24 = -1;
                    }
                }
            }
        }
        arr_23 [i_0] = max(-var_0, (((var_2 & (!var_11)))));
    }
    var_25 = (max(-18711, 4294967295));
    #pragma endscop
}
