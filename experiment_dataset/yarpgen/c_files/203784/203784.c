/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_16 *= (((arr_4 [i_0]) ? 30993 : -var_10));
                arr_7 [i_0] [i_1] [i_0] |= (((((arr_6 [6] [i_0] [i_1]) && 679419261)) && (var_9 && var_12)));
                arr_8 [i_0] [i_0] [i_1] = var_14;
                arr_9 [1] [i_0] = -679419261;
                arr_10 [i_0] [i_0] = (min((arr_4 [i_0]), (arr_6 [i_0] [i_1] [i_0])));
            }
        }
    }
    var_17 = (max(((-var_1 ? var_7 : var_11)), ((((max(10160, var_0)) ^ (var_2 | -8759))))));
    #pragma endscop
}
