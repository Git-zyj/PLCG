/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((max(var_12, 3062965972)))));
    var_20 -= (~1232001323);

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_21 *= ((6656660371215173957 || ((((arr_1 [6]) ? 4517290699341722462 : (arr_1 [14]))))));
        var_22 = (~-var_17);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_23 = (((((14277908315428642136 ? 1091750962048182260 : 97))) ? (max((arr_3 [i_1]), var_11)) : (((((arr_3 [i_1]) || (arr_3 [i_1])))))));
        var_24 = (min(var_24, ((((~1) ? ((((arr_3 [i_1]) ? (arr_4 [i_1]) : var_4))) : ((max((var_3 ^ 105), (~1)))))))));
        var_25 = 196;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 15;i_3 += 1)
            {
                {
                    var_26 = 87;
                    var_27 = ((var_0 ? ((min(91, -76))) : (((arr_8 [i_3 + 1] [i_3 - 3] [i_3 - 3]) ? -238 : (arr_3 [i_3 + 2])))));
                }
            }
        }
        var_28 -= (((var_4 ? 91 : (arr_4 [i_1]))));
    }
    #pragma endscop
}
