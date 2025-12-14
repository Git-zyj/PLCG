/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [i_1] [i_1] [i_1] = ((((-(arr_2 [i_2] [i_1])))) ? (((((arr_7 [i_2] [i_2] [i_2] [i_1]) == (((arr_6 [2] [2] [i_2] [i_3]) << (var_18 - 8313))))))) : var_1);
                            arr_12 [i_1] [i_3] = (max(((-1 ? -93 : 18446744073709551611)), (((!(arr_5 [i_0] [i_2] [i_3]))))));
                            arr_13 [i_1] = ((!((max(var_13, var_4)))));
                            arr_14 [0] [i_1] [i_1] [i_0] = (max(((-(arr_0 [i_1] [i_0]))), (arr_0 [i_3] [i_2])));
                            var_20 = 255;
                        }
                    }
                }
                arr_15 [i_1] = (max(((((max(-1, (arr_5 [i_1] [13] [i_0])))) ? (arr_3 [i_0] [i_1]) : (arr_3 [i_0] [i_1]))), (((arr_9 [i_0]) ? (arr_9 [i_0]) : 655938597))));
                var_21 = (((((arr_8 [i_0] [i_0] [i_0] [i_1] [i_0]) ? 11 : (arr_8 [i_0] [8] [i_0] [i_0] [i_1]))) | ((~(arr_8 [i_0] [1] [i_0] [0] [i_0])))));
                var_22 = ((((!var_13) ? ((~(arr_6 [i_1] [19] [i_0] [i_0]))) : ((max((arr_6 [i_0] [i_0] [i_0] [i_1]), 6954))))));
            }
        }
    }
    var_23 = var_8;
    var_24 = (18 > 9);
    #pragma endscop
}
