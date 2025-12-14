/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((0 / 12575084563292588511) ? ((max(var_15, var_11))) : ((min(var_2, var_5)))))) ? var_9 : var_13));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_17 = ((~((~((-8323771965965686647 ? var_14 : 1))))));

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_18 = 1;
                        arr_8 [i_0] [i_1] [i_1] [i_1] [i_2 + 1] [i_3 - 1] |= ((var_2 | ((0 ? 7006 : ((1 ? 185 : 25327))))));
                        var_19 -= ((-(arr_3 [i_0] [i_1] [i_3 - 1])));
                        arr_9 [i_0] [i_1] [i_3] [i_3] = (arr_0 [i_2]);
                    }
                    var_20 *= (min((min(var_14, (min(1, var_10)))), ((((var_15 || var_1) < (max(var_1, (arr_3 [i_2] [i_1] [i_0]))))))));
                }
            }
        }
    }
    #pragma endscop
}
