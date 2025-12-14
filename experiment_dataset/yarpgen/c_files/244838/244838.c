/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_1] = (min(((2047944932 | (arr_7 [i_1]))), (((var_1 == ((var_3 ? var_6 : 128)))))));
                    var_10 *= (((((arr_4 [i_1 - 1] [19] [i_2] [i_2]) > ((112 ? 101 : 1)))) ? 7558197635562937218 : ((min((arr_4 [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_1 - 1]), (arr_4 [i_1 - 3] [i_0 + 1] [i_0] [i_0]))))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        arr_13 [i_3] [i_3] = (arr_10 [i_3]);
        var_11 ^= (146 > 1625082128);

        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            arr_18 [i_3] = var_9;
            arr_19 [i_3] [i_3] = ((-(arr_0 [i_3])));
        }
        for (int i_5 = 3; i_5 < 14;i_5 += 1)
        {
            var_12 += (((arr_16 [16] [i_5 - 3] [i_5]) ? (arr_17 [4] [i_5 + 3]) : 5253589956334427569));
            var_13 -= (-375168039 || 30482);
            var_14 ^= ((-(arr_20 [i_5 + 1] [i_3] [i_5 + 1])));
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {

            for (int i_7 = 1; i_7 < 15;i_7 += 1)
            {
                arr_29 [i_3] [i_6] [i_3] [i_3] = 9;
                arr_30 [i_3] [i_3] [i_3] [i_7] = (arr_6 [i_7] [i_7] [i_7] [i_7 - 1]);
                arr_31 [i_3] [i_3] [i_6] |= (((!var_9) % (arr_20 [i_7] [i_7 + 1] [0])));
            }
            for (int i_8 = 2; i_8 < 15;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        {
                            var_15 += (((arr_38 [i_9] [i_8] [i_8] [i_8 - 2] [i_8] [i_9] [i_9]) ? (arr_38 [i_9] [i_9] [i_3] [i_8 + 1] [i_8] [i_8 + 1] [i_9]) : (arr_32 [i_8 + 2] [i_6] [i_8 + 2] [i_10])));
                            var_16 = (max(var_16, (((~(arr_2 [i_3] [i_9] [i_3]))))));
                            arr_39 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((~((var_4 ? var_0 : 3849013637708804183))));
                            var_17 = (((arr_5 [i_6] [i_3] [i_3] [i_9]) + var_4));
                        }
                    }
                }
                arr_40 [i_3] [i_6] [i_3] = (-1625082139 ? 581307227540432064 : 96);
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        {
                            var_18 = 0;
                            arr_47 [i_3] [i_6] [i_8] [i_3] [i_6] = 118;
                        }
                    }
                }
            }
            var_19 = 19;
        }
    }
    var_20 -= (((max(7438064441369457493, 1))));
    #pragma endscop
}
