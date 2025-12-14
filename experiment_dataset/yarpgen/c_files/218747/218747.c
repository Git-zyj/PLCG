/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 = (((((arr_7 [i_0] [i_1] [i_2]) ? (arr_4 [i_1] [i_1] [i_2]) : var_2))));
                    arr_8 [1] [13] [1] [i_1] = ((min(((18207878386901756192 ? -9223372036854775798 : 1)), 9)));
                }
            }
        }
    }
    var_21 = ((var_10 ? ((((min(var_4, var_11))) ? (((1670587771 ? var_14 : 48))) : (max(var_6, var_7)))) : var_6));
    var_22 = 122;
    var_23 = ((((((var_0 ? var_1 : 65525)))) ? (((min(var_2, var_8)))) : (min(-8180223908702873163, var_19))));
    var_24 = (max(var_24, ((((min(121, (min(var_18, -9))))) ? (((((var_19 ? 32764 : var_15))) ? 14329844935817967024 : ((51600 ? 4294967273 : 120)))) : ((((min(var_6, 8516231286859305534))) ? (min(var_4, 3333983437)) : (((min(var_0, var_1))))))))));
    #pragma endscop
}
