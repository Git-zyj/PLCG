/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 += var_0;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_10 [i_2] [i_2] = (max(((((arr_2 [i_0] [i_0] [i_3]) > (arr_4 [i_0])))), (arr_0 [i_2] [i_0])));
                        var_20 -= (((4138768514361097898 ? (648 - var_12) : 64888)));
                        var_21 = (((arr_1 [i_0]) - (((arr_1 [i_0]) / 64883))));
                    }
                }
            }
        }
        var_22 ^= (max(14307975559348453713, var_8));
        var_23 = ((((min(51709, 6))) & var_6));
    }
    var_24 = ((~(!var_6)));
    var_25 = (max(var_25, ((((~12878) <= (!var_12))))));
    var_26 = (max(var_26, ((max((((((-29608 ? var_11 : var_9))) ? (32767 ^ 18038247866938508245) : (56388 + 1))), var_5)))));
    #pragma endscop
}
