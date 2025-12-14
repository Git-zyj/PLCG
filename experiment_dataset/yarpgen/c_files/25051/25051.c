/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((max((13294277511604268168 * 0), ((max(-3, 0))))), 13));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (max(0, 53147))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_4] [i_4] [i_4] [i_1] [i_0] |= ((((((((14 ? 237 : 241))) ? (var_13 <= var_13) : ((~(arr_5 [i_0] [i_1] [i_3])))))) + (((36424 - 110) + (max(2739697845, var_4))))));
                                arr_14 [i_2] [i_1] [i_2] [i_3] [i_4] [i_4] [i_1] = (max((min(var_8, ((~(arr_9 [i_3]))))), (((~(-1 & 53147))))));
                                arr_15 [i_4] [i_1] [i_3] [i_3] [i_4] [i_0] [i_4] = (max(var_10, (max(((947356745 / (arr_5 [i_3] [i_1] [i_0]))), ((((arr_9 [i_3]) == var_3)))))));
                                arr_16 [i_0] [i_3] [i_0] [i_0] = (max(((((var_5 <= var_9) != (~var_5)))), (max(var_11, (((var_5 != (arr_7 [i_0] [i_1]))))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            arr_23 [i_5] [i_5] [i_5] [i_1] [i_5] = (13203520788011905611 != 0);
                            var_16 ^= ((min(((max(0, var_11))), (-18 + var_7))) > (((min((-14300 > 32767), (max(var_5, var_9)))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
