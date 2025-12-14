/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    var_18 = (var_11 <= -4933984146035335564);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((((var_7 << (((min(var_11, var_13)) - 37))))) & (max(var_2, var_9)));
                arr_7 [i_1] = ((((max(var_5, var_10))) && (var_11 && var_13)));
                var_19 = (max(var_19, var_7));
            }
        }
    }
    var_20 = (max(var_20, var_1));
    var_21 = (max(var_21, var_2));
    #pragma endscop
}
