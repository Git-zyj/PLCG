/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!(((var_6 ? var_3 : var_15)))));
    var_20 *= ((2018561987 ? var_14 : (max((min(var_5, var_8)), ((max(var_3, 1)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1 - 1] [10] [i_2 + 1] = (((max((arr_6 [i_0] [i_1] [5] [i_2 + 2]), var_10)) >= (((min(var_2, var_17))))));
                    var_21 = (((((var_3 ? (arr_3 [i_1 - 1] [i_1]) : (arr_3 [i_0 + 1] [i_1])))) ? ((var_12 ? (arr_3 [i_0 + 1] [i_1]) : (arr_3 [i_0 - 1] [i_1]))) : (((arr_3 [i_1 - 2] [i_1]) ? var_3 : (arr_3 [i_0] [i_1])))));
                }
            }
        }
    }
    var_22 = (((var_1 ? var_0 : 10603499995263253515)));
    #pragma endscop
}
