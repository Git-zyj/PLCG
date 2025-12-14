/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 |= (((arr_2 [i_0] [i_1]) ? (((0 ? -109 : 0))) : ((~(arr_1 [1])))));
                arr_6 [i_0] [i_0] [i_0] = (((min((arr_1 [i_0]), (arr_5 [i_0] [i_1] [i_0]))) != (((((2498201141 ? 455682721 : var_0)) - (min(22, 1796766161)))))));
                arr_7 [i_0] [i_1] = ((4591761316875269786 || (((var_5 ? (arr_5 [i_0] [i_1] [i_0]) : (((arr_4 [i_0] [i_0]) & var_4)))))));
                arr_8 [i_1] [i_0] [i_0] = (min(-121, 1));
                var_12 = (min(var_12, ((((~-103) | var_4)))));
            }
        }
    }
    #pragma endscop
}
