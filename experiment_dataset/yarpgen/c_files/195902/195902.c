/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = ((min(2216229116, 18759)));
                    var_14 = ((!(arr_0 [i_1] [i_2])));
                    var_15 = (min(var_15, 2216229116));
                }
            }
        }
    }
    var_16 = 2078738184;
    var_17 = (var_6 - var_5);
    var_18 = (max(((((max(2078738188, var_10))) || (var_10 && var_5))), ((!(!37371278)))));
    #pragma endscop
}
