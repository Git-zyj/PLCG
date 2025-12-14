/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = var_13;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_15 = (((-2147483647 - 1) != 101));
                            var_16 = ((((101 ? 58 : (arr_8 [i_0] [i_1] [i_2] [i_2] [i_3]))) > (-1064576218 * 0)));
                        }
                    }
                }
                var_17 = (((~(arr_4 [i_0]))));
                var_18 = (var_1 ? (~20987) : (((arr_8 [i_1] [14] [i_1] [i_1] [i_1]) & (arr_3 [i_1]))));
                var_19 = (((min(-1074014403, (-32767 - 1)))) ? ((148 ? -40 : 60615)) : -0);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 9;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 11;i_5 += 1)
        {
            {
                var_20 = 33;
                var_21 = ((((8337683134932555716 ? (arr_1 [i_5 - 2] [i_4 + 2]) : ((~(arr_6 [i_4]))))) % ((35621 ? 32767 : 51070))));
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 11;i_7 += 1)
                    {
                        {
                            var_22 = (((arr_16 [i_4 + 2] [i_7 + 1] [i_6 + 1]) << (((((((arr_16 [i_4 + 2] [i_4] [9]) + (arr_0 [11] [i_7 - 2])))) <= var_6)))));
                            arr_19 [4] [i_6] [i_6 - 1] [i_7 + 1] = (((arr_12 [i_5] [9]) % 8573));

                            for (int i_8 = 3; i_8 < 10;i_8 += 1)
                            {
                                var_23 = (((arr_15 [i_5 - 2] [i_6] [i_7 - 2]) + var_1));
                                var_24 = ((((arr_14 [i_6]) ? (arr_14 [i_6]) : (arr_14 [i_6]))));
                                var_25 = (~-81);
                            }
                        }
                    }
                }
                var_26 += (((((arr_17 [i_5 + 1] [i_5] [4] [4]) ? ((max((arr_16 [i_4 + 1] [i_5] [i_4 - 1]), var_11))) : ((((arr_12 [1] [1]) == (arr_11 [i_4 - 1] [i_5] [i_5 - 2])))))) * ((max(69, 0)))));
            }
        }
    }
    var_27 = (!var_6);
    #pragma endscop
}
