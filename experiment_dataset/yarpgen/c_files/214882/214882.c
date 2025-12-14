/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_15 = (max(var_15, var_1));
                            arr_14 [i_0] [i_1] [i_2] = -27476;
                            arr_15 [i_0 + 1] [i_1] [i_0] [i_3] = (min(((var_7 ? (!var_9) : ((245 ? 10 : 32754)))), (((arr_5 [i_0 - 1] [i_0] [i_3 - 1]) % (var_12 + var_9)))));
                            var_16 += ((~((min(8, (222 && 16731149455622404715))))));
                        }
                    }
                }
                arr_16 [i_0] = ((((9223372036854775807 ^ 16731149455622404708) ? ((1715594618087146890 ? var_13 : 7791)) : ((var_6 ? 28 : var_9)))));
                arr_17 [i_0 - 2] [i_0 - 1] [i_0] = ((~(max((~var_11), (arr_13 [8] [i_1] [8] [1])))));
                arr_18 [i_0 - 1] [i_0] [5] = ((((((var_5 ? 22 : var_2))))) != ((~((var_3 ? 9223372036854775807 : 5226918465200463079)))));
            }
        }
    }
    var_17 = ((2251799813685247 ? ((min(var_8, (min(23682, var_9))))) : (((((var_10 ? 200 : var_6))) ? ((min(var_13, -18965))) : var_2))));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 22;i_6 += 1)
            {
                {
                    var_18 = (((var_10 / -6118070663238084235) * (((46409224 ? (arr_25 [i_6 - 3] [i_6 - 4] [i_6 - 1]) : -119)))));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 22;i_8 += 1)
                        {
                            {
                                arr_31 [i_4] [22] [i_7] [i_6] [i_8] [i_8 + 1] [14] = (((-16463 / 68) + ((var_2 ? var_10 : (arr_30 [i_7])))));
                                var_19 -= (((((min(-13242, (arr_23 [i_4] [i_7]))) ^ var_1))));
                                var_20 += ((((((arr_24 [i_6]) ? -6118070663238084216 : ((-38 ? var_3 : var_4))))) ? 162794521 : (min(-6118070663238084253, 118))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
