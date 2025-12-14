/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 240;
    var_19 = (((((((max(253, 571841900))) ? (var_5 == -571841918) : (max(-571841896, var_5))))) ? var_8 : var_17));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = (min((arr_3 [i_0] [i_1] [i_0]), ((((571841919 ^ -571841877) && -571841888)))));
                var_20 = (arr_3 [i_0 + 2] [i_0] [i_0 + 2]);
                var_21 = arr_2 [i_0] [14];
            }
        }
    }
    var_22 = ((~((((-571841877 && var_6) < (571841878 & var_11))))));
    var_23 = var_4;
    #pragma endscop
}
