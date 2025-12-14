/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= 1;

    for (int i_0 = 2; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_11 = (min(var_11, (((465301088142638625 ? ((((((arr_2 [i_0]) ? (arr_2 [i_0]) : 22960))) ? (arr_1 [i_0 + 1]) : var_7)) : ((min((arr_2 [i_0 - 1]), (arr_2 [i_0 + 1])))))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 ^= 42563;
                    var_13 = (max(var_13, ((min(31099, 1)))));
                }
            }
        }
    }
    for (int i_3 = 2; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_14 ^= (((((+((min((arr_10 [i_3 - 2] [i_3]), -14332)))))) - (((((1 ? (arr_13 [i_3] [i_3]) : 1))) - (max(4294967295, (arr_1 [i_3 + 1])))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {
                {
                    var_15 = max((arr_7 [i_4] [i_4] [i_5]), ((4294967295 ? (~255) : (27341 | 0))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_16 = (~-34436);
                                var_17 = (min((max((arr_9 [i_3 - 2] [i_4] [i_7]), ((1 ? 1 : (arr_11 [i_3] [i_3]))))), (((!(arr_10 [i_3 - 1] [i_5]))))));
                                var_18 = ((+(((1 & 3953403387) ? ((4294967295 ? var_4 : 1)) : (max(-1832807475, 1))))));
                            }
                        }
                    }
                    var_19 = 12438;
                    arr_24 [i_4] = (--341563910);
                }
            }
        }
        var_20 = ((arr_16 [i_3] [i_3]) && (((21 ? (arr_14 [i_3]) : 33554431))));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 20;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 18;i_11 += 1)
                {
                    {
                        arr_34 [i_8] [i_8] [i_8] [i_8 - 1] [i_8] [i_8] = (arr_31 [i_8] [i_9] [i_8] [i_8]);
                        arr_35 [i_8] [i_8] [i_10] [i_10] = 1;
                    }
                }
            }
        }
        arr_36 [i_8] = (-(arr_30 [i_8 + 1] [i_8 + 1]));
        var_21 = (((arr_32 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8] [i_8 + 1] [i_8]) && (((-1 ? var_4 : (arr_27 [i_8]))))));
        arr_37 [i_8] [i_8] &= (2082585635 >= ((~(arr_31 [i_8] [i_8] [i_8] [i_8 - 1]))));
    }
    #pragma endscop
}
