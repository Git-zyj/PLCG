/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= 2319967844;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 = ((10688 != (((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [2])))));
        arr_2 [i_0] = ((var_9 ? (arr_1 [i_0] [i_0]) : ((((arr_0 [i_0]) ^ (arr_1 [i_0] [i_0]))))));
        var_13 = ((1 ? 4293488872 : 8192));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [10] = (max(var_8, -10691));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_0] [i_2] [i_1] [i_0] &= (arr_0 [i_2]);
                                var_14 = ((((((1 ? var_10 : (arr_4 [i_1] [i_1] [i_4]))))) ? ((max(var_4, var_8))) : (arr_6 [i_0] [i_3 - 1] [i_3 + 1] [i_4 + 2])));
                            }
                        }
                    }
                    arr_14 [i_0] [i_1] [i_1] [i_2] = (((((((var_5 ? (arr_3 [i_1] [i_0]) : var_3)) << (((arr_8 [10] [i_2] [i_1] [i_1] [8] [i_2]) + 9594))))) ? var_10 : ((((max(var_9, var_1))) ? -8793834747997485209 : (arr_12 [i_0] [i_0] [i_1] [i_2] [i_0])))));
                    var_15 = (max(var_15, (arr_4 [i_0] [i_1] [i_2])));
                    var_16 = 8793834747997485208;
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 9;i_5 += 1)
    {
        var_17 ^= (((4293488856 ? -10696 : (arr_9 [i_5] [i_5 + 1] [4] [0]))));
        arr_18 [i_5] = (max(((-var_2 * (arr_1 [i_5] [i_5]))), (((~(10683 + 1))))));
        arr_19 [i_5] = (max((arr_1 [i_5] [i_5]), (((1 ? -10683 : 10686)))));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 10;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 7;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 10;i_8 += 1)
            {
                {

                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        var_18 = ((-10683 ? (-1270639104 - 1) : (424346297 + 0)));
                        var_19 = (((arr_4 [i_6 - 1] [i_7 - 2] [i_8 + 1]) ? (arr_20 [i_6 + 1] [i_6 + 1]) : var_2));
                    }
                    arr_32 [i_8] [i_7 - 1] [i_8] [i_6] &= (arr_3 [i_7 + 3] [i_7 - 1]);
                }
            }
        }
        arr_33 [i_6] [i_6 + 1] = (((arr_24 [i_6 + 1] [i_6 + 1]) / (arr_5 [i_6] [7] [i_6] [i_6])));
    }
    var_20 = var_9;
    var_21 *= var_0;
    #pragma endscop
}
