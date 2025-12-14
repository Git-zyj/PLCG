/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_1] = (min((((-258223751433664163 ? var_11 : (arr_6 [i_1] [19] [19] [i_0])))), (((!(258223751433664164 ^ 6813044444126439178))))));
                    var_16 = ((((min((arr_8 [i_1] [i_1 + 2]), (arr_8 [i_1 - 1] [i_1 + 1])))) ? ((min(-6813044444126439201, ((-258223751433664163 ? var_9 : -6813044444126439158))))) : (((var_0 ? 6813044444126439201 : 6813044444126439178)))));
                    arr_10 [i_1] [i_1] = min(6813044444126439194, (arr_0 [i_1]));
                }
            }
        }
    }
    var_17 = (min((((var_0 != -6813044444126439158) ? 41 : var_0)), (((!-258223751433664160) ? (var_14 + -6813044444126439146) : var_2))));
    var_18 -= (((((((min(var_9, 6813044444126439132))) ? -438925002 : ((-6813044444126439158 ? var_1 : var_11))))) ? (min((min(var_11, 6813044444126439163)), (min(var_7, var_4)))) : ((var_7 ? (max(-6813044444126439136, var_2)) : (var_6 > var_1)))));

    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_14 [i_3] [i_3] = ((!((min(6813044444126439183, -6813044444126439117)))));
        var_19 = (max(var_19, ((min((((arr_8 [i_3] [i_3]) ? (arr_8 [i_3] [i_3]) : (arr_8 [i_3] [i_3]))), ((min((arr_8 [1] [6]), (arr_8 [i_3] [i_3])))))))));
    }
    #pragma endscop
}
