/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_10, var_12));
    var_19 = -var_1;

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_20 ^= (((!116) % var_4));
        var_21 = var_15;
        var_22 = ((((((((arr_0 [i_0]) - var_11))) * ((117 ? var_7 : var_5)))) > ((((97 < (!var_17)))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_23 += ((((((((var_17 + (arr_6 [i_4] [i_1])))) ? (max(176, var_12)) : (25 - 32767)))) && ((max(var_10, (max(230, 28)))))));
                            var_24 = (arr_6 [i_1] [i_2]);
                        }
                        var_25 = (min(var_25, ((max(((17 ? var_16 : (arr_12 [i_1] [i_1]))), var_12)))));
                        var_26 *= 117;
                    }
                }
            }
        }
        arr_18 [i_1] = ((~((~(arr_5 [0])))));
        var_27 ^= (arr_11 [i_1] [i_1] [i_1] [i_1]);
        var_28 = (((((124 ? (-9223372036854775807 - 1) : (arr_12 [0] [i_1])))) ? (arr_12 [i_1] [i_1]) : ((max(-32761, (arr_12 [i_1] [i_1]))))));
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            {
                                var_29 += ((max((arr_9 [i_7 - 1] [i_8] [i_8] [i_10]), (arr_9 [i_7 + 1] [i_8] [9] [i_10]))));
                                arr_35 [i_7] [i_7] = (((!var_11) * (((3607423772 == (((var_0 >> (13025 - 12994)))))))));
                                var_30 = (min(var_30, ((((((32760 ? (arr_15 [i_6] [1] [i_9]) : var_1)) - ((max(var_14, var_8)))))))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        var_31 -= (~65535);
                        var_32 = (arr_32 [i_11] [0] [i_7] [i_6]);
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        var_33 = 1;
                        var_34 ^= var_16;
                    }
                }
            }
        }
        var_35 -= (((((((arr_42 [i_6]) ? var_13 : var_2)) == (arr_34 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))) | var_12);
    }
    #pragma endscop
}
