/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (~1)));
    var_18 = ((var_0 ? ((max((max(var_5, var_6)), (var_12 && var_5)))) : 1));
    var_19 = (((((var_14 ? (65535 && var_10) : (!var_9)))) && var_13));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = 12008190689070075570;
                    arr_6 [7] [0] = (((!((((arr_3 [i_1] [i_1] [i_1]) ? (arr_2 [i_0] [i_0]) : 1))))));
                    var_21 -= (((arr_3 [i_2 - 1] [i_1] [i_2]) ? ((((arr_3 [i_2 - 1] [i_1] [i_2]) && (arr_3 [i_2 - 1] [i_2 - 1] [i_2])))) : (((!(arr_3 [i_2 - 1] [i_2 - 1] [i_2 - 1]))))));
                }
            }
        }
    }
    var_22 = (min(var_22, (((!(((var_9 ? var_12 : var_1))))))));
    #pragma endscop
}
