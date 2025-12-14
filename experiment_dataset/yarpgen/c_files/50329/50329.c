/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_4));
    var_19 = var_11;
    var_20 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 7;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((+(((arr_0 [i_0]) ? var_17 : (max(var_17, -2782584988691559858))))));
                var_21 += (~var_2);
                var_22 = 1;
                arr_5 [i_0] [0] [i_0] = var_1;
                var_23 ^= ((0 ? ((((arr_1 [0]) && (arr_1 [6])))) : ((min(1, 128)))));
            }
        }
    }
    #pragma endscop
}
