/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((!var_6) % ((-((var_18 ? var_1 : 1))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_21 = (((((-((-(arr_2 [i_0] [i_0] [i_0])))))) - (max((arr_5 [i_0]), 14234952008365376909))));
                    var_22 = var_2;
                    var_23 = ((~((min((arr_4 [i_0]), (arr_4 [i_0]))))));
                }
            }
        }
    }
    var_24 = var_7;
    var_25 = 1073741823;
    #pragma endscop
}
