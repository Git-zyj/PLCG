/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((var_0 ? var_3 : ((var_1 + ((var_3 ? var_3 : 29323)))))))));
    var_11 = (max(var_11, ((max(var_8, ((~(max(1, 137438953471)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_12 = var_6;
                    var_13 = (min(var_13, ((min((arr_0 [i_1]), (arr_0 [i_2]))))));
                }
            }
        }
    }
    var_14 *= (min((((((var_2 ? 137438953470 : var_2))) || (((var_4 ? 281670426 : var_6))))), (((var_8 / var_3) || 32767))));
    #pragma endscop
}
