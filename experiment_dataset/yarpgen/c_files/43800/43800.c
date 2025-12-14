/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_19 += (((arr_6 [i_4]) - (arr_6 [i_0])));
                                arr_15 [i_0] [i_1] [i_2] [i_1] [i_4] = ((~(86 ^ var_14)));
                                arr_16 [i_0] [i_0] [i_2] [i_3] [i_4] = (-1941233665808679664 ? (0 % 12405465460672165565) : (arr_13 [i_0] [i_1] [i_2] [i_3] [i_4]));
                            }
                        }
                    }
                    var_20 += ((+((((arr_3 [i_2] [i_0] [i_0]) <= -4723096713355146054)))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 20;i_7 += 1)
                {
                    {
                        arr_26 [i_6] = (arr_22 [i_7 - 2] [i_7] [i_7 - 1] [i_5]);
                        var_21 = 2131661849;
                    }
                }
            }
        }
        var_22 = (max(var_22, (((!(1 % 4723096713355146073))))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        var_23 = arr_8 [15] [i_8] [i_8] [15] [i_8];
        var_24 = 12356684476720039763;
    }

    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        var_25 += ((!((min(((((arr_31 [1] [i_9]) - var_8))), (arr_29 [i_9]))))));
        var_26 = ((4723096713355146084 / ((~(arr_31 [13] [i_9])))));
    }
    #pragma endscop
}
