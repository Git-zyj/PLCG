/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_9));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_12 ^= ((((((((arr_1 [i_0]) ? (arr_1 [i_0]) : 560116378)) == (arr_0 [i_0])))) + (((arr_1 [i_0]) & 2711363067))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_13 |= (var_8 && -var_1);
                    var_14 = var_2;
                    var_15 *= ((!(((arr_1 [i_0 + 2]) || var_2))));
                }
            }
        }
        var_16 = (max((var_6 / var_1), ((((((arr_0 [i_0]) ? var_5 : var_4))) ? (((var_3 < (arr_2 [4] [4])))) : (!var_4)))));
    }
    var_17 = 2711363067;
    #pragma endscop
}
