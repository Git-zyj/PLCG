/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~((-94 ? var_3 : 1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = (min(((min((arr_2 [i_1] [i_1] [i_0]), 14143))), (max((arr_2 [i_1] [i_1] [i_0]), var_9))));
                arr_4 [16] [16] [i_1] = ((((var_13 >> (238 - 192))) << (((~-3217841085791777169) - 3217841085791777115))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_17 ^= (!975726870);
                            var_18 -= (~-1081261525);
                            var_19 = (max((max((arr_6 [8] [i_3] [i_3] [i_2]), (arr_8 [6] [i_0] [i_0] [1]))), var_9));
                            var_20 ^= (max((min(((max(17, -53))), (min((arr_5 [16] [i_2] [i_0] [11]), (arr_2 [i_0] [i_1] [i_2]))))), (((!((min(1, 238))))))));

                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                var_21 = (max(var_21, ((min(1550674180, 18)))));
                                var_22 = (~642155262);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_23 = (arr_11 [i_6 - 1] [i_6 + 1] [i_6 + 3] [i_6 + 3] [i_6 - 1] [i_6 + 2]);
                            var_24 = (((((87 - (arr_16 [16] [i_1] [i_1] [i_5] [i_6] [i_6])))) | -var_13));
                        }
                    }
                }
                var_25 = (max(var_25, ((((arr_3 [13]) ? ((((arr_5 [i_1] [11] [13] [i_0]) ? (arr_1 [i_0] [i_0]) : ((~(arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [1])))))) : (max(((min((arr_0 [4] [i_1]), (arr_1 [3] [i_0])))), ((var_14 - (arr_5 [i_0] [i_0] [7] [i_1]))))))))));
            }
        }
    }
    #pragma endscop
}
