/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_11 = ((var_2 ? 1644583829 : (((max(var_2, (arr_3 [i_0])))))));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_12 |= ((~(~30157)));

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            var_13 += var_4;
                            arr_12 [i_0] [i_4] = 59428;
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            arr_15 [i_5] [i_2] = ((var_4 + 22290) <= 6105);
                            var_14 = (min(var_14, ((!(arr_5 [i_1 - 1] [i_2] [14] [i_5])))));
                        }
                    }
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_15 = -6337179598572332548;
                                arr_23 [i_0] [i_8] = var_6;
                                var_16 ^= (((~2047) ? (arr_0 [20]) : 6108));
                                var_17 = (max(var_17, ((((!43) ? -50 : -var_9)))));
                            }
                        }
                    }
                    arr_24 [i_0] = ((-(((23145 >= (arr_7 [i_0] [i_6]))))));
                }
                arr_25 [11] [i_1] = -1;
                arr_26 [i_0] [8] |= ((-(arr_22 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])));
            }
        }
    }
    var_18 = ((5288 ? 0 : 6208128208075248538));
    #pragma endscop
}
