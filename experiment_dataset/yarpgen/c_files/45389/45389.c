/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= (max(((var_5 / (((var_5 + 9223372036854775807) >> (var_15 - 10181102224715350727))))), var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_21 += (arr_0 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [4] [i_1] |= ((((min((arr_8 [i_1] [i_3 + 1] [i_2] [i_1]), (arr_8 [4] [i_3 + 1] [i_2] [i_1])))) ? (arr_11 [i_0] [i_3 + 1] [i_2] [13]) : (arr_9 [i_0] [i_1] [i_2] [i_3])));
                            var_22 = (min(var_22, ((max(((((((arr_3 [i_1]) >> (var_16 - 8292446316414493280)))) ? ((var_19 ? var_6 : (arr_1 [i_0] [i_0]))) : (((arr_6 [i_1]) / var_10)))), (arr_0 [i_0]))))));
                            var_23 = ((!(arr_8 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_0])));
                            var_24 = ((12128738615060374629 ? (arr_1 [i_2] [i_3 + 1]) : ((((min((arr_11 [i_3] [i_2] [i_1] [i_0]), var_8))) ? (arr_3 [i_0]) : 65535))));
                            var_25 = (((((arr_9 [i_3] [i_0] [16] [i_3]) <= var_9)) ? (((398298359 != (arr_2 [i_0] [i_0])))) : ((~(arr_1 [i_3 + 2] [i_3 + 1])))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_26 = arr_0 [i_0];
                                arr_19 [i_0] [i_0] [i_0] [i_0] = ((min((arr_14 [i_5 + 2]), (arr_14 [i_5 + 1]))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 17;i_8 += 1)
                    {
                        {
                            var_27 = ((((var_17 ? 224 : (min((arr_21 [i_7] [i_8]), var_19)))) * (arr_20 [i_1])));
                            var_28 = (~var_3);
                            var_29 = (min(var_29, (arr_3 [i_1])));
                        }
                    }
                }
            }
        }
    }
    var_30 = (max(-72, (((min(var_2, var_7))))));
    #pragma endscop
}
