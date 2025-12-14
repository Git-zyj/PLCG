/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [13] [i_1] = ((((((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0])))) || ((min((arr_0 [8]), (((1 >= (arr_2 [i_0])))))))));
                var_18 = (((var_17 + (arr_1 [i_0] [12]))));
            }
        }
    }
    var_19 = (((((var_14 >= ((var_5 ? var_15 : var_0))))) >> (var_12 - 10904762673008815520)));
    var_20 = (max((((((min(-3870, var_6))) || var_0))), 55843));
    #pragma endscop
}
