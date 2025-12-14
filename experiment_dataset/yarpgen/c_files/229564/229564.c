/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!((max((max(var_2, var_6)), (!var_0))))));
    var_14 = var_11;
    var_15 = ((!((max((!var_4), var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = (max((max(var_12, var_9)), (!var_10)));
                var_17 = var_2;
                arr_4 [i_0] = (max((!var_5), (!var_7)));
                var_18 = (max((max((!var_7), (min(var_0, var_4)))), (!-8571817907683460143)));
            }
        }
    }
    var_19 = ((!(!10)));
    #pragma endscop
}
