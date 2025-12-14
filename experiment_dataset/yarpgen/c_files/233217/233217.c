/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(((((47 ? 47 : -46))) ? var_7 : (var_3 | var_9)))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_14 = ((35 + (min((max(2147483647, -32)), (arr_2 [i_0])))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_15 = (((((9478 ? 25768 : -92))) ? 1073739776 : (arr_7 [i_0] [i_1] [i_2] [i_2] [7])));
                        var_16 ^= (((max(1, 8321499136))) ? 242 : 0);
                        var_17 |= (min(((var_9 ? -var_3 : ((-8321499136 ? -2147483635 : (arr_2 [1]))))), ((~(max(2147483634, var_12))))));
                    }
                    var_18 = 52719;
                }
            }
        }
    }
    #pragma endscop
}
