/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = ((~(255 && var_8)));
        arr_4 [i_0] [i_0] = (min(7556, -35401));
    }
    var_10 = var_0;
    /* LoopNest 3 */
    for (int i_1 = 3; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    arr_14 [i_3] [i_3] = ((-(((min(233, var_3)) & (min(var_5, var_9))))));
                    var_11 = ((((min(231, 27))) ? (arr_10 [i_1] [i_1 + 1] [i_2] [i_3]) : ((((((arr_6 [i_1]) ? var_4 : 254))) ? (~116) : ((var_7 ^ (arr_5 [i_1])))))));
                    var_12 = (min((arr_8 [i_2 - 1] [i_2]), ((((max(7, 23))) ? (min(97, (arr_9 [i_1] [i_2] [i_3]))) : (((var_4 ^ (arr_5 [i_2]))))))));
                    arr_15 [i_3] [i_2] [i_3] = ((~((min((arr_2 [i_1 + 1]), -21464)))));
                }
            }
        }
    }
    #pragma endscop
}
