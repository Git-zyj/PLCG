/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((var_9 ? -504821700016026230 : var_5)) < (-5789072869930890717 && var_15))) ? ((((var_10 && var_0) ? var_12 : 8004))) : (~var_4)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [0] [i_0] [i_2] [i_2] = (max((((var_15 ? 1132201789 : 217))), (57531 % 1038210342)));
                    var_19 &= 9635;
                }
            }
        }
    }
    var_20 = ((~(max((max(var_7, 8004)), var_2))));
    var_21 = (max(var_21, (((~((max(1, var_0))))))));
    var_22 = ((var_7 ? (max(var_16, ((var_11 ? 9628 : var_1)))) : ((min((min(var_6, 9635)), var_2)))));
    #pragma endscop
}
