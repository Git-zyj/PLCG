/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((var_6 << (((((min(var_3, var_11)) + 498632628439251447)) - 4))))) ? var_13 : var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = (((((~(524160 ^ var_4)))) ? var_1 : (4693893843462378783 | 434713855151923298)));
                arr_5 [i_0] [i_0] = (arr_2 [i_0] [i_0] [i_1]);
                var_15 = (min(var_15, var_1));
            }
        }
    }
    var_16 = (~var_9);
    #pragma endscop
}
