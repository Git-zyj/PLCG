/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_16 = ((((43 ? (min((arr_12 [i_4] [i_3]), var_11)) : (arr_9 [i_0] [i_0] [i_2] [i_3] [i_0]))) < var_9));
                            arr_13 [i_3] = ((1 * ((max(-43, 178)))));
                        }
                    }
                }
            }
            var_17 = 12612379413545646142;
        }
        var_18 = (max((0 && 12612379413545646142), (((12612379413545646142 << (22882 - 22863))))));
        var_19 |= (((arr_12 [i_0] [8]) || (14 || 5314184598803660157)));
    }
    var_20 = ((4377642555071860438 % ((((1 | -1437271986) - ((12612379413545646135 ? var_1 : 1)))))));
    var_21 = var_5;
    #pragma endscop
}
