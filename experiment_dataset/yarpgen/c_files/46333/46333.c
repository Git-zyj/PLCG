/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 = ((((-9223372036854775795 ? (arr_2 [i_0]) : var_10))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0] [15] [i_2] [i_3] = (9223372036854775794 / ((-9223372036854775791 ? 9223372036854775788 : ((1601008260767629167 ? 34830 : -9223372036854775795)))));
                        arr_13 [i_3] = ((((-9223372036854775804 ? (arr_6 [i_0] [i_3]) : 9223372036854775794))) ? (max((arr_11 [i_0]), (arr_7 [i_1] [i_2]))) : ((((1 != (arr_11 [i_2]))))));
                    }
                }
            }
        }
    }
    var_13 = (max((((~1601008260767629151) - (((-5213295566334730588 ? 0 : var_7))))), ((var_6 ? var_11 : (max(var_3, var_5))))));
    #pragma endscop
}
