/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_4, var_11));
    var_16 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_17 = (((arr_3 [i_0] [i_1 + 2] [i_2]) / ((((min((arr_5 [i_2]), (arr_4 [i_1 + 3])))) ? ((var_5 ? var_0 : var_4)) : ((1463435248 ? 26176 : 37416))))));
                    var_18 = ((((((arr_5 [i_2]) ? (arr_5 [i_2]) : var_3))) ? ((~(arr_5 [i_2]))) : (45157 ^ 0)));
                }
            }
        }
    }
    #pragma endscop
}
