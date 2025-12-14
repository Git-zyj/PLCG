/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = var_6;
                    var_21 = (~32767);
                    var_22 = (max(var_22, (arr_2 [i_0] [i_0] [i_2])));
                    var_23 += (((((32767 ? (((var_10 ? (arr_2 [i_2] [i_2] [i_2]) : -32766))) : (arr_3 [i_1] [i_1] [i_2])))) ? (((((-32759 * 6257817319077933253) > (((max(32767, -32759)))))))) : 426606173));
                    arr_8 [i_2] [i_0] [i_0] = (((-32767 - 1) || 32758));
                }
            }
        }
    }
    var_24 = (-32767 - 1);
    var_25 = var_15;
    var_26 |= var_4;
    #pragma endscop
}
