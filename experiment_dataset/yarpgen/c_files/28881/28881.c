/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    var_11 |= var_4;
    var_12 |= ((+(((144 != 9529) * -9547))));
    var_13 = (((((((max(16129444607938686652, var_4))) ? ((3095629867203742351 ? 9529 : -86)) : var_5))) ? (max(-1716, var_8)) : (var_2 + var_7)));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 *= (((((arr_8 [i_0] [i_1] [i_2] [10]) && (arr_4 [i_0] [i_1]))) ? (arr_4 [i_0] [i_0]) : 9529));
                    var_16 = (min(var_16, 4431224796153130873));
                    var_17 = (arr_6 [i_0] [i_1] [i_2]);
                }
            }
        }
        var_18 = 119;
    }
    #pragma endscop
}
