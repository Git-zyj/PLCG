/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = ((+(((0 * 470287735) * -470287735))));
                arr_4 [i_1] [i_1] = (arr_3 [i_0] [i_0] [i_0]);
                arr_5 [i_1] [i_1] = (min((arr_0 [1]), ((((arr_1 [i_1] [i_0]) ? (arr_2 [i_0] [i_1] [i_1]) : var_13)))));
                var_19 ^= (max((min(((470287735 ? (arr_2 [i_1] [10] [i_0]) : 18298301415462169431)), 64)), ((((var_12 + var_6) ? 1472393711 : 1472393711)))));
                var_20 = 64;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    arr_14 [i_4] [i_4] [7] [i_4] = (max((((arr_11 [i_2] [i_2] [i_2] [i_4]) / (arr_10 [i_3 - 1]))), (((var_17 ? var_5 : var_0)))));
                    var_21 = ((-(arr_6 [i_3 + 2] [i_3 + 2])));
                    arr_15 [i_2] [i_4] = ((((((!(arr_10 [i_2]))))) ? (arr_6 [i_4] [i_2]) : (max(var_12, (arr_12 [i_3 + 1] [i_4] [i_3 - 1] [i_3 - 1])))));
                }
            }
        }
    }
    var_22 = ((((var_17 + ((var_2 ? 66 : var_10)))) + (((var_15 ? var_11 : ((3078681996 ? 4294967295 : var_2)))))));
    var_23 = (!var_9);
    #pragma endscop
}
