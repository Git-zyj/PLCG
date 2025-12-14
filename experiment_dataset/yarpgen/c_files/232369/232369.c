/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_14 != ((var_0 ? var_2 : var_2)))) ? var_6 : var_13));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 = (((arr_3 [i_0] [i_0] [i_2 + 2]) != (~var_9)));
                    var_17 = (min(var_17, (arr_7 [i_2] [i_1] [i_0])));
                    arr_8 [i_0] [i_2] = (arr_2 [i_1] [i_2] [i_2 + 1]);
                }
            }
        }
    }
    var_18 -= var_2;
    var_19 = (((((((max(var_14, -110))) ? ((max(var_10, var_10))) : var_14))) ? (((110 ? 109 : var_6))) : ((((((var_0 ? -11807 : 28037))) ? var_12 : (~0))))));
    var_20 = var_12;
    #pragma endscop
}
