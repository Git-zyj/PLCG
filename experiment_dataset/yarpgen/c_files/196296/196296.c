/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_12 [12] = max(((((max((-2147483647 - 1), 2316854596))) ? ((((arr_11 [i_4] [8] [i_2 + 1] [8] [i_0]) % 1978112682))) : (arr_3 [i_1 + 2] [i_4]))), (min(2316854614, (arr_5 [12] [i_1 - 1] [i_2 + 1] [i_3 - 1]))));
                                arr_13 [i_1] [i_1] [i_2 - 1] [i_2] [i_2] [i_2 - 4] = (max(((((((((-2147483647 - 1) ? -122 : var_10)) + 2147483647)) << (((min((arr_5 [3] [7] [1] [3]), 1978112676)) - 1978112676))))), (min(1978112694, (~1978112700)))));
                            }
                        }
                    }
                    arr_14 [i_1] [6] [i_2] = -7;
                    arr_15 [i_1] [i_1] = (((arr_3 [i_2 - 1] [i_1 + 2]) ? ((~(~1))) : var_9));
                    arr_16 [i_1] = ((~(!2316854606)));

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        arr_20 [i_5] |= var_3;
                        arr_21 [i_5] [i_1 + 1] [4] = ((-((var_1 ? var_2 : var_2))));
                        arr_22 [i_1] [i_1] = ((((((((arr_6 [i_1 + 1] [i_2 - 1] [i_5]) + 2147483647)) >> (13636894936081638421 - 13636894936081638406)))) >= (arr_11 [i_0] [i_1] [i_2] [i_1] [i_0])));
                    }
                }
            }
        }
    }
    var_11 = (((-(max(2316854587, var_6)))));
    #pragma endscop
}
