/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= ((((var_14 ? (~1023) : (min(1011, 1023)))) | var_4));
    var_17 = var_9;
    var_18 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_2] [15] [i_4] = ((-(((arr_8 [i_0 + 2] [i_1 + 1] [i_2] [1]) ? ((((arr_11 [i_0]) % var_2))) : var_9))));
                                var_19 = (((((((-(arr_12 [19] [i_3] [i_3] [12] [i_1] [i_0] [i_0]))) < ((max(1, (arr_2 [i_0] [i_0]))))))) >> (((((((~(arr_5 [i_0 - 1] [i_1] [i_3] [i_4])))) ? var_13 : ((min(var_6, (arr_10 [i_4 + 1] [i_3] [i_1] [0])))))) - 20911))));
                                var_20 = ((((max(1, (arr_3 [i_0 + 1])))) >> (arr_3 [i_0 - 2])));
                            }
                        }
                    }
                    var_21 -= ((var_11 ? (arr_7 [i_0 - 3] [i_0 + 2] [i_0 - 4] [1]) : (max(var_10, (max(0, var_12))))));
                }
            }
        }
    }
    #pragma endscop
}
