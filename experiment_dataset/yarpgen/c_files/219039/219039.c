/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] [9] = ((1 ? (((!(var_13 & var_11)))) : (((((1 ? 65530 : 32747)) > (var_8 != var_9))))));
                arr_5 [i_0] = ((-(((arr_2 [14]) ? (arr_2 [i_1 - 1]) : (arr_2 [i_0])))));
                var_15 = -1;
            }
        }
    }
    var_16 = -132;
    var_17 = ((((max(1, 176))) ? (!var_14) : 30729));
    #pragma endscop
}
