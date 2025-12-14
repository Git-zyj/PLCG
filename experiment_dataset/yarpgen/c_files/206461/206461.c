/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= ((-(((var_4 >= var_7) ? (~var_1) : var_9))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, 2656552605));
                    var_13 = (min(var_13, ((((((((-3893190174924910485 ? var_1 : -2412293280007218599))) ? (!var_0) : (max(1638414715, -54))))) ? ((max(-706663121, (((!(arr_5 [i_2] [1]))))))) : (((var_8 >= 34670) ? 2656552603 : (533442250 && var_3)))))));
                    var_14 = (max(var_14, (!-66)));
                    var_15 = (max(var_15, (((~((~(arr_3 [i_0] [i_1]))))))));
                }
            }
        }
        arr_8 [i_0 - 1] = var_2;
        var_16 = 16475;
        arr_9 [8] [i_0 + 1] = (~-40);
    }
    var_17 -= (((var_8 ? (var_1 + var_10) : -1540032326)) + var_2);
    #pragma endscop
}
