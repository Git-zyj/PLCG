/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, (arr_2 [i_1])));
                    var_21 = ((((((arr_2 [i_2]) ? var_6 : (min((-2147483647 - 1), 18446744073709551597))))) ? ((((0 <= var_10) ^ (arr_5 [i_0] [i_1])))) : ((var_4 / (arr_3 [i_1] [i_2])))));
                }
            }
        }
    }
    var_22 = ((!(((((var_12 + (-9223372036854775807 - 1))) + 0)))));
    var_23 &= ((var_18 ? var_6 : ((((!(~var_5)))))));
    #pragma endscop
}
