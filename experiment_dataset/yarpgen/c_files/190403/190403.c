/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 2147483640;
    var_19 = (min(var_19, (((!(((-(~var_14)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = var_17;

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_21 = (min(var_21, (((~((~(!65))))))));
                    var_22 = ((~(max(-1, -1840419864))));
                    arr_8 [i_0] [i_0] [i_2] = (!var_3);
                }
                for (int i_3 = 2; i_3 < 13;i_3 += 1)
                {
                    var_23 = (arr_3 [i_1]);
                    arr_11 [i_0] [2] [i_0] [12] = var_10;
                    arr_12 [i_0] [i_0] [i_0] [i_0] |= (arr_9 [i_3] [i_1] [i_1]);
                }
            }
        }
    }
    var_24 = ((min(-var_6, (~37))));
    #pragma endscop
}
