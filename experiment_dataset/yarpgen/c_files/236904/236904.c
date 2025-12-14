/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [5] [i_0 + 3] [i_0 + 1] |= ((((((((arr_4 [6] [1] [i_1 + 1]) || 17379755068906877972))) == var_6))) ^ (arr_5 [2] [i_0 + 1] [i_1]));
                var_10 = 1;
                arr_7 [i_0] [14] [i_1] = (-13845 > 1);
                var_11 = (min(var_11, (((~(((arr_3 [i_1 - 1] [i_1 - 1] [i_1 + 1]) ? (arr_4 [i_1 + 1] [i_1 - 1] [i_1 - 1]) : (arr_5 [i_1 - 1] [i_1 + 1] [i_1 + 1]))))))));
            }
        }
    }
    var_12 = (((var_7 & var_1) > var_5));
    var_13 = (min(var_13, var_0));
    var_14 = ((var_1 ? ((var_1 ? var_2 : var_0)) : var_9));
    #pragma endscop
}
