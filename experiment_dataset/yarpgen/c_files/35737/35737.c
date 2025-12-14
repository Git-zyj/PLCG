/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((((!(var_5 / var_3)))), (((2147483647 % 7419747439551431306) ? (!-1) : 7796899612271373535))));
    var_12 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [1] [i_1] [i_2] = (2147483647 == var_4);
                    var_13 = ((!(((((var_3 ? 1 : (arr_1 [i_1 - 1] [i_2]))) - (arr_5 [i_2 - 1] [i_1] [i_1 + 1] [i_1]))))));
                    arr_8 [i_0] [i_1] [6] [i_2] = (((var_7 + var_8) % (arr_1 [i_1 + 1] [i_1 + 1])));
                    var_14 = ((var_4 ? (((arr_5 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_1]) ? (((var_5 ? 127 : var_6))) : var_3)) : (var_10 >> 6)));
                    var_15 |= (((-12 + 2147483647) >> (var_4 - 37398)));
                }
            }
        }
    }
    #pragma endscop
}
