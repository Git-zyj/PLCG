/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = max((max((max(33061001, var_4)), ((max(var_0, var_11))))), ((((var_4 ^ var_8) == var_12))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, ((max(16972, ((-166 ? 4261906295 : 4261906294)))))));
                    var_17 += ((((24 / var_1) * 33060993)));
                }
            }
        }
    }
    var_18 = var_5;
    var_19 = (((((24 & (min(195, var_6))))) ? var_7 : ((((!var_3) && ((min(var_8, var_6))))))));
    #pragma endscop
}
