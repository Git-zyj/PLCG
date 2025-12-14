/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!var_9);
    var_18 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, (((57344 ? 16041661691717938331 : 47)))));
                    var_20 = -38;
                    arr_6 [i_0] = ((-(((arr_5 [i_0]) - (arr_2 [i_1])))));
                }
            }
        }
    }
    #pragma endscop
}
