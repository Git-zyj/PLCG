/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = 2242011432;
                arr_6 [i_1] = (arr_5 [i_0] [10]);
                var_18 = 1;
                var_19 = arr_2 [i_0];
            }
        }
    }
    var_20 = 2242011432;
    var_21 = ((var_13 ? (max(var_5, 2242011435)) : 2242011427));
    #pragma endscop
}
