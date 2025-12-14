/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((min(96, 7167483410682666220)), 50131));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] = (max((((arr_6 [i_0 + 3] [i_0 - 1] [i_0]) || (arr_1 [i_0] [3]))), ((!(arr_6 [i_0 - 1] [i_0 + 3] [i_0 + 3])))));
                    arr_9 [i_0] [i_2] [i_0 + 1] [i_0] = -8716173378899270471;
                    arr_10 [i_0] [i_0] [i_0] = 18;

                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            arr_15 [i_0] [i_1] [i_2] [i_3] [15] [i_0] = ((2093356178 ? 4323455642275676160 : (65490 >= -8716173378899270493)));
                            var_17 = ((!(((arr_6 [i_0 + 3] [i_0 + 3] [i_4]) && (arr_4 [i_0])))));
                            arr_16 [i_0] = var_6;
                        }
                        arr_17 [i_0] [i_0] [i_0 + 4] [i_0 + 1] = (((29 < 65532) ? ((15417 ? (!-8716173378899270491) : (arr_6 [i_0] [i_0 + 4] [i_3 + 2]))) : 34));
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            arr_23 [i_0] [11] [i_5] = (arr_18 [i_0] [i_1] [i_2] [i_1]);
                            arr_24 [i_0] [16] [i_1] [i_5] [16] [i_5] = 12;
                            arr_25 [i_0 + 3] [i_1] [i_0] [i_0 + 3] [i_0 + 3] [i_2] = 15404;
                            arr_26 [i_0] [i_0] [i_0] = ((~(arr_7 [i_0 + 4])));
                        }
                        arr_27 [i_0] [i_0] [i_0] = ((((-1397454029 ? (arr_22 [i_1] [i_1] [i_2] [i_1] [i_0 + 3] [i_1]) : ((453514848437284220 ? 11108 : (arr_1 [i_0 + 1] [7]))))) * ((min((!18), (min(4122651270, (arr_6 [i_1] [i_1] [i_1]))))))));

                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 19;i_7 += 1)
                        {
                            arr_30 [i_0] [i_1] [i_2] [14] [i_7 - 1] [i_0 - 1] [i_0 - 1] = (((5 < 110143459) >> (65487 < -8716173378899270470)));
                            arr_31 [i_0] [i_5] = (arr_1 [i_0] [20]);
                        }
                        arr_32 [5] [16] [19] [1] [19] [i_0] = ((((!((max((arr_18 [i_0] [i_0] [i_0] [i_0 - 1]), 453514848437284220))))) ? ((-((min(65535, 65523))))) : (65532 != 31)));
                        arr_33 [i_0 + 4] [i_0] [i_2] [i_0 + 4] [i_5] = ((-(max(0, 114))));
                    }
                }
            }
        }
    }
    var_18 = (min((~113), var_3));
    #pragma endscop
}
