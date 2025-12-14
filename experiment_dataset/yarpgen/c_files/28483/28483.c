/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_16 = ((((((arr_2 [i_0] [i_0]) | ((var_14 ? var_3 : -9223372036854775784))))) ? 2325086136 : ((min((arr_4 [i_1] [i_2] [i_1] [i_2]), (((arr_4 [i_2] [i_2] [i_2] [i_2]) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_5 [i_2] [i_2] [i_2]))))))));
                    var_17 = (!(arr_6 [i_2] [i_2 + 1] [i_2 + 1]));
                }
            }
        }
    }
    var_18 = (min(var_18, (((!((((var_6 + var_1) * (!var_13)))))))));
    var_19 = (((((((min(var_5, var_11))) ? -2147483631 : var_15))) * ((var_1 ? ((-9223372036854775784 ? 75 : -9223372036854775784)) : ((min(var_7, var_7)))))));
    #pragma endscop
}
