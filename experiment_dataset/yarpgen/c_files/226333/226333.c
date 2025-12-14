/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_15 += (arr_0 [i_0] [i_1]);
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_16 ^= ((~(~463251787)));
                                var_17 = (min(var_17, 463251773));
                                var_18 = (min(var_18, (((!((!(arr_5 [i_0] [i_1] [7]))))))));
                                arr_14 [i_4] = (((max(((max(64, -1))), ((-463251769 ? -463251794 : -1))))) ? ((-117 & (min(1811409102, (arr_8 [i_0] [i_1]))))) : (((((820308769 ? var_2 : 463251768))) + (arr_10 [i_1 - 2] [i_1 - 2] [i_2 - 4] [i_2 - 3]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = 10050609276928571331;
    var_20 = (max(var_20, (!var_12)));

    /* vectorizable */
    for (int i_5 = 2; i_5 < 9;i_5 += 1)
    {
        var_21 = (((arr_11 [i_5]) ? 139 : (arr_11 [i_5])));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    var_22 = (((463251773 != 122) ? (((arr_8 [i_6] [i_6]) ? var_11 : 13)) : ((((!(arr_13 [3] [i_6] [i_7] [i_7] [i_7] [i_6] [i_5])))))));

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_23 += ((463251773 ? (!0) : (arr_10 [i_5] [i_5] [i_5 - 1] [i_5 - 1])));
                        var_24 = (+-6);
                        arr_24 [i_8] [i_5] [i_7] [i_8] = (~189);
                        var_25 = (arr_5 [i_5 - 2] [i_8] [i_8]);
                    }
                    arr_25 [i_5] [i_6] [i_7] = (((arr_9 [1] [i_5 + 1] [i_7] [1]) != -463251769));
                    var_26 -= (arr_11 [i_7]);
                }
            }
        }
        var_27 = (arr_8 [i_5] [5]);
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 4; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 1;i_11 += 1)
            {
                {
                    arr_32 [i_9] [i_10] [i_10] [i_9] = (!2587442589906174897);
                    var_28 = 1;
                }
            }
        }
    }
    #pragma endscop
}
