/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_19 ? ((9222884816652552817 ? 0 : var_18)) : var_10))) ? ((((!var_1) ? ((var_3 ? var_4 : 4385193333681485638)) : var_15))) : (max(((var_2 ? var_16 : 1586392348912714787)), (var_8 && var_11)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_21 = (max(((min(-1114402165, (arr_7 [i_0 + 2])))), (((arr_4 [i_1]) ? (((((arr_7 [i_0]) != 40)))) : (arr_2 [5] [i_1])))));
                    var_22 |= (53 != (((arr_4 [i_2]) ? 1586392348912714796 : ((min(var_12, (arr_7 [i_0])))))));
                }
            }
        }
    }
    #pragma endscop
}
