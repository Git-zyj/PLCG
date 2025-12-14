/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    var_13 &= (max(var_7, (-1 / 1859683470)));
    var_14 = (((((min(var_11, var_6))) ? var_5 : (max(var_5, var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 += ((max(((var_8 ? (arr_0 [i_0]) : (arr_5 [i_1]))), ((((arr_0 [7]) || (arr_2 [i_0])))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_16 = (arr_8 [i_0] [i_0] [i_2] [i_2] [i_3] [i_2]);
                                var_17 = ((((-(1 * var_5))) | (((min((arr_5 [i_0]), (arr_5 [i_1]))) >> (~18446744073709551609)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
