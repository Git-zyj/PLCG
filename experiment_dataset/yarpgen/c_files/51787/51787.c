/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_15 = (!var_7);

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            var_16 += (((max((max(var_13, var_2)), (var_10 & var_6))) >= var_5));
            arr_5 [i_0] [i_0] = (~var_3);
        }
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            arr_9 [15] [i_2] = ((-(max(var_11, ((min(var_14, var_8)))))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_17 &= (min(11045694665454247719, 11045694665454247719));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_2] = (min(-var_4, (((!(var_13 / var_1))))));
                        }
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_18 = ((!((!((min(var_1, var_10)))))));
            arr_19 [i_0] = -var_5;
        }
    }
    var_19 = ((!((min(-var_8, var_14)))));
    var_20 = (min(((-(var_14 != var_8))), (max(var_10, -var_8))));
    var_21 = var_6;
    #pragma endscop
}
