/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_13 = ((((max(var_12, (arr_6 [i_1] [i_1] [i_0] [i_3]))) | (max(3520238010647090134, 25018)))));
                                var_14 = ((var_1 ? (min((max((arr_7 [i_0] [i_0] [i_0] [i_3]), (arr_9 [i_0] [i_0] [i_0] [i_3] [i_0]))), ((max(1912523426, (arr_3 [i_0])))))) : var_0));
                            }
                        }
                    }
                    var_15 = (arr_1 [i_1]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 9;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            {
                var_16 = max((max((((arr_15 [i_5] [10] [9]) ? 3360133446 : 7893186582703423257)), ((max((arr_5 [1] [1]), (arr_10 [i_5] [i_5 - 1] [i_5] [5])))))), (arr_0 [i_5]));
                var_17 = (min(var_17, (((((~(arr_7 [i_5] [i_5] [i_5 - 1] [i_5 - 1]))) ^ ((((~var_7) & ((25570 ? var_6 : (arr_13 [i_5] [i_5])))))))))));
                var_18 = ((!((((arr_4 [i_5 + 2] [i_5 + 1] [i_5]) ? (arr_4 [i_5 + 2] [i_5 + 2] [i_5]) : var_9)))));
                var_19 = var_10;

                /* vectorizable */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    var_20 = (((arr_10 [i_5 - 2] [i_5 - 2] [i_5] [i_7]) | var_4));
                    var_21 = var_5;
                    arr_19 [i_6] [i_6] |= (((((var_4 ? var_9 : (arr_6 [8] [14] [i_6] [2])))) ? (2003576800627230148 * var_4) : var_10));
                }
            }
        }
    }
    #pragma endscop
}
