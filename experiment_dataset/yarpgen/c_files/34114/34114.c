/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (!189)));
    var_20 = ((~(~6832960416401157710)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_21 = (max(var_21, ((((~79) ? ((max((arr_2 [i_0 + 1]), 68))) : (max(61, (min((arr_2 [i_0 - 1]), 0)))))))));
                var_22 = (~1);
                arr_5 [i_0 - 2] = (~154);
                var_23 = (arr_2 [i_0]);
                arr_6 [i_0] = ((-0 ? (((arr_2 [i_0 - 2]) ? (arr_2 [i_0 - 2]) : (arr_2 [i_0 - 2]))) : (((arr_2 [i_0 - 2]) ? (arr_2 [i_0 - 2]) : (arr_2 [i_0 - 2])))));
            }
        }
    }
    #pragma endscop
}
