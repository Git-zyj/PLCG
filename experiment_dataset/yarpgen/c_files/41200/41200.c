/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= ((var_15 ? var_10 : var_0));
    var_19 = (max(var_19, (((var_14 ? var_17 : (((((17214 ? 39659 : 48307)) != ((var_15 ? var_8 : var_1))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    var_20 -= (((arr_7 [i_2 + 2] [i_2 + 1]) == (min(var_14, (arr_5 [i_2 + 2] [i_2 - 3] [i_2 - 3])))));
                    var_21 = (min(var_21, ((var_3 ? ((max(48321, var_11))) : ((max((arr_4 [i_2 + 1] [i_2 + 1]), -91)))))));
                    arr_8 [i_1] [i_1] = (arr_1 [i_1]);
                    var_22 = (arr_3 [i_1]);
                }
            }
        }
    }
    var_23 = (((~var_8) ? (var_11 < var_0) : var_5));
    #pragma endscop
}
