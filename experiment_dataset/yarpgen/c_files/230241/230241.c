/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = var_5;
                arr_5 [i_1] [i_0 + 2] [4] = (((!((((arr_4 [i_0]) - 32767))))) && (((((var_18 ? (arr_3 [i_0] [i_1] [0]) : 92)) / (arr_4 [i_0])))));
                var_21 = ((((!(arr_2 [i_0 + 1]))) ? ((min((arr_2 [i_0 - 2]), (arr_2 [i_0 + 2])))) : 92));
            }
        }
    }
    var_22 = var_17;
    #pragma endscop
}
