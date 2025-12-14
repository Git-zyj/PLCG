/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 = (min(((31 ? -7 : (arr_1 [i_0]))), (!-20177)));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_11 [1] [i_1] = (((~((max(22, 6791))))));
                        arr_12 [i_0] [i_1] [i_2] [7] [i_0] [7] = (max(((((arr_2 [i_1]) ? -1 : var_13))), 18014398507384832));

                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            var_16 = 335120924023174335;
                            var_17 += (((arr_7 [i_2] [i_4 + 1] [i_4 - 1] [i_4 + 1]) + 1857871244));
                            var_18 = (min(var_18, (arr_8 [11] [i_4 + 1] [i_2])));
                            var_19 = (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [11] [10]);
                        }
                        for (int i_5 = 1; i_5 < 14;i_5 += 1)
                        {
                            var_20 ^= ((-(((arr_15 [i_5 + 1]) / (arr_15 [i_5 + 1])))));
                            var_21 = ((((min((arr_17 [i_5 + 1] [i_5 - 1] [12] [13] [3] [i_5 - 1] [3]), ((var_14 ? 255 : 7))))) ? (min((((arr_1 [i_0]) - (arr_3 [i_3]))), (arr_7 [i_0] [9] [i_2] [i_3]))) : ((((!(arr_13 [2] [i_1] [i_2] [14] [i_5 + 1] [i_1] [i_5])))))));
                        }
                        var_22 = (min((min(255, 0)), (((~(arr_4 [i_0] [i_0]))))));
                    }
                }
            }
            arr_19 [i_0] [i_1] [i_0] &= ((!(!1479864434)));
        }
        arr_20 [i_0] = (!((min((arr_0 [i_0]), var_9))));
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 14;i_6 += 1)
    {
        var_23 = (arr_21 [11] [i_6 - 1]);
        var_24 = (((!(arr_22 [i_6 + 1] [i_6 + 1]))) ? (arr_22 [i_6 - 1] [4]) : 31);
        var_25 = (max(var_25, ((((arr_21 [i_6] [i_6 + 1]) + (arr_22 [10] [i_6 - 1]))))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        var_26 &= (248 || var_6);
        var_27 += (arr_25 [i_7]);
        var_28 = 131071;
        var_29 = ((+(((arr_26 [i_7]) / 2787930154))));
    }

    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        arr_29 [i_8] [i_8] = (max(3604116030, -50));
        var_30 ^= (arr_27 [i_8]);
        var_31 = 209;
        arr_30 [i_8] = 62;
        arr_31 [i_8] = (arr_28 [i_8] [i_8]);
    }
    #pragma endscop
}
