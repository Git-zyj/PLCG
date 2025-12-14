/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((max((((var_8 ? var_11 : 240)), (max((-9223372036854775807 - 1), 4294967295))))));
    var_14 = ((255 ? (max(((145 ? 59074 : -32577)), (var_12 / var_2))) : var_7));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = (((~(((arr_3 [i_0]) | var_2)))));
                                var_16 = (max((((!((min(1, 2251)))))), (((2717633192408173798 & 16) - ((min(var_9, (-2147483647 - 1))))))));
                                var_17 = ((((-32581 ? (~-2717633192408173799) : (arr_8 [i_4] [i_3 - 2] [i_0] [i_0] [i_1] [i_0 - 1])))) ? (((((107 > (-9223372036854775807 - 1))) && 2147483647))) : ((0 ? (arr_11 [i_0 - 3] [i_0 - 3] [i_0] [i_0 - 3]) : ((((arr_2 [i_0 - 2] [i_0 - 2] [i_4]) && (arr_4 [i_0] [i_0] [i_0])))))));
                                arr_13 [i_0] [i_0] [19] = (max((((var_11 >= (var_11 & var_9)))), (min((((arr_7 [i_3 - 1] [20] [i_3 - 1] [i_3]) ? 0 : var_2)), (-1 <= 767381064)))));
                                var_18 = (((!((min(1134922659, (arr_7 [i_0 - 1] [i_1] [0] [i_3])))))));
                            }
                        }
                    }
                    var_19 = 21410;
                }
                var_20 = ((((min((arr_6 [12] [i_0] [i_1] [i_1]), (arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 1])))) ? (~0) : ((~(arr_2 [i_0] [i_1] [i_0])))));
            }
        }
    }
    #pragma endscop
}
