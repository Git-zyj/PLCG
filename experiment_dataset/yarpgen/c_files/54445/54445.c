/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 ^= (max(((((min(0, var_16))) & (15000 - 15000))), ((((arr_0 [i_0 - 1] [i_0 - 1]) != -25718)))));
                arr_4 [i_0] [i_0] [i_0] = (min(((var_14 & (arr_3 [6] [i_1] [i_0 - 1]))), (((-1637942086 ? (arr_0 [i_0 - 1] [i_0 - 1]) : 0)))));
                var_20 = (((((var_8 ? 1557 : (arr_0 [i_0] [i_0 - 1])))) ? (arr_0 [i_0] [i_0 - 1]) : (-3092421006032617842 >= 7304101302664533447)));
                var_21 = ((((((!(!18014398501093376))))) == (min((arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]), ((min(var_9, 26274)))))));
            }
        }
    }
    #pragma endscop
}
