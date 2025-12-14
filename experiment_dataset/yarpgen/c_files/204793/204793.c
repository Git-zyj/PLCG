/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204793
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
                arr_6 [i_0] [i_1] = -2;
                var_11 = ((~(arr_1 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_11 [1] [12] [i_3] [i_3] [i_3] = var_10;
                            var_12 = (arr_9 [i_3]);
                            var_13 = -1;
                        }
                    }
                }
                var_14 = ((((((~(arr_5 [i_0]))))) ? (((((min(26166, (arr_10 [i_0] [i_1] [1] [i_1]))) <= (((min(var_10, (arr_0 [i_0]))))))))) : (arr_9 [i_0])));
                arr_12 [i_0] [i_0] [i_1] = ((((((min(-12, -18)) - 649887382))) ? 16865160740446619707 : ((min(173, 0)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    arr_20 [i_4] [i_5] = (((arr_0 [i_5 - 1]) ? (arr_0 [i_5 + 1]) : (((!(arr_0 [i_5 - 1]))))));
                    var_15 = (((arr_19 [i_5 - 1]) ? (((min((arr_8 [i_5 - 1]), (arr_8 [i_5 + 1]))))) : (min((arr_9 [i_4]), (arr_19 [i_5 - 1])))));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                arr_26 [11] [11] [11] [13] [i_7] [1] = 1;
                                var_16 = -var_7;
                                arr_27 [i_4] [i_4] [i_4] [3] [i_4] = (min(10, var_7));
                            }
                        }
                    }
                    var_17 = (arr_19 [i_4]);
                    arr_28 [i_4] = 4256096209491388155;
                }
            }
        }
    }
    #pragma endscop
}
