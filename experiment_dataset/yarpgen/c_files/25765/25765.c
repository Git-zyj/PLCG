/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_13 = (((((30375 ? var_2 : (!var_5)))) ? ((66977792 ^ ((var_3 ? var_9 : -6158)))) : var_7));
                    arr_9 [i_0] [3] = (13443467197765227229 ? 8551764327120184074 : 32240);
                    arr_10 [3] [i_1] [i_1] [i_1] = (min(var_5, ((52487 & (((arr_6 [i_0] [i_0] [i_0]) ? var_5 : (arr_5 [i_0])))))));
                }
            }
        }
    }
    var_14 = ((((((((14866 ? 7777 : 14856))) - (var_3 + var_6)))) ? var_8 : var_2));
    var_15 = (max(var_15, var_9));
    var_16 = ((-var_2 - (25269 - 8126464)));
    #pragma endscop
}
