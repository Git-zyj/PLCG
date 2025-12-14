/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!var_9);
    var_15 = -var_0;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    var_16 = -2718764017801093185;
                    var_17 = (((((min(1548514105, (arr_2 [i_0])))) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (arr_8 [i_0] [i_0]))) - (((min(18794, -5588)))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_18 = ((((min((arr_10 [i_3]), (2047 == 142)))) ? (min(218, (((arr_11 [i_3] [i_3]) ^ -5597)))) : (((arr_3 [i_3] [i_3]) ? (((1 ? (arr_4 [i_3] [i_3]) : -1343936646))) : ((-(arr_9 [i_3])))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 12;i_5 += 1)
            {
                {
                    arr_16 [i_3] = 1794520414;
                    var_19 = (min(((-1343936645 ? (((arr_1 [6] [6]) ? (arr_15 [i_5 + 4] [i_4] [i_3]) : (arr_14 [i_3] [i_4] [i_5]))) : -1)), (arr_15 [i_5] [i_5 - 1] [i_5 + 3])));
                    var_20 = (min(((((arr_11 [i_3] [i_3]) < -7692))), 1));
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_21 = (((((~1343936649) ? (-637730195 > 45715) : ((var_5 ? (arr_0 [i_7]) : (arr_8 [i_7] [i_6 - 1]))))) % (arr_3 [i_7] [i_6])));
                                var_22 = ((-(max(((var_1 ? 5589 : 1841148696)), (-1343936645 ^ 1803466361)))));
                                var_23 = ((2232907792479981031 ? (arr_9 [i_6 - 2]) : ((-1944354749 % (arr_19 [i_6 + 1] [i_6 - 1] [i_5 - 1] [i_4] [i_3])))));
                            }
                        }
                    }
                }
            }
        }
        arr_24 [i_3] = (((-(var_6 - var_5))));
        var_24 = ((((~(arr_6 [1]))) != -18729));

        /* vectorizable */
        for (int i_8 = 2; i_8 < 15;i_8 += 1)
        {
            arr_28 [i_3] = 131;
            var_25 = 819112164;
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            arr_32 [i_9] [i_3] = (3475855117 ? (arr_31 [i_9] [i_3]) : (arr_11 [i_9] [i_3]));
            var_26 = (((arr_9 [i_9]) ? (arr_9 [i_3]) : -9223372036854775785));
        }
    }
    #pragma endscop
}
