/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] = ((((((min(var_6, var_8))) ? (((var_11 ? var_8 : 175))) : ((var_6 ? var_19 : -20926)))) > (((-7 - (((arr_2 [i_0]) - -6429)))))));
                    var_20 = (min(var_20, ((((arr_3 [i_1 - 1] [12]) >> ((((~(arr_6 [i_1 - 2] [i_1] [i_1 + 1] [i_1]))) + 7111463508000163026)))))));
                    var_21 = ((!((max(var_4, 2185283731)))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_22 = (((((925515219 ? 21759 : var_11))) ? var_5 : (((var_3 ? 1 : (arr_9 [i_3]))))));
        arr_12 [i_3] = ((1564829519 != (!-1)));
    }
    #pragma endscop
}
