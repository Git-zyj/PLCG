/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_9 [20] [i_2 + 1] [i_1] [20] = (((--1) ? ((max((arr_6 [i_1] [21] [i_3]), (min((arr_6 [i_0] [i_0] [4]), 42851699))))) : (1 / 2799109917481838961)));
                            var_10 = ((1445819937 ? ((-(!86))) : (!-99)));
                            var_11 = (arr_2 [i_0] [i_1] [i_2 - 2]);
                        }
                    }
                }
                arr_10 [i_0] = (var_6 / 1);
            }
        }
    }

    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                {
                    var_12 &= ((-((max((arr_1 [i_4]), (arr_6 [i_4] [i_5] [i_6]))))));
                    arr_19 [16] [3] [6] = (min((arr_14 [i_5 - 2] [i_4]), var_0));
                }
            }
        }
        var_13 = (max(var_13, ((min((((((arr_0 [i_4]) || (arr_12 [i_4]))) || 1)), ((((min((arr_7 [5] [i_4] [i_4] [1]), (arr_16 [i_4])))) || -var_4)))))));
        arr_20 [i_4] [i_4] = ((((((min((arr_16 [i_4]), (arr_7 [i_4] [i_4] [i_4] [i_4])))) + ((~(arr_12 [i_4]))))) - (((((var_6 & 2842251882252813113) > (arr_11 [1])))))));
        var_14 = (max(((min(1, 1))), (min(var_9, (min(var_8, (arr_16 [i_4])))))));
    }
    for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
    {
        var_15 = ((arr_2 [i_7] [i_7] [i_7]) << (((min((arr_0 [i_7]), -var_8)) + 19318)));
        var_16 = (((((((((arr_23 [i_7]) ? var_4 : (arr_7 [1] [i_7] [i_7] [i_7])))) || ((min(var_6, (arr_0 [i_7]))))))) << (((var_5 || (arr_8 [i_7] [i_7] [i_7]))))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
    {
        var_17 = arr_7 [i_8] [i_8] [i_8] [i_8];

        for (int i_9 = 3; i_9 < 19;i_9 += 1)
        {
            arr_31 [i_8] [i_9] [i_8] = (((arr_21 [i_8]) || (arr_28 [i_8])));
            arr_32 [19] [i_8] = ((((((arr_27 [i_8] [i_8]) / (arr_6 [i_9] [i_9] [i_8])))) ? (arr_4 [i_8]) : -2799109917481838936));
            arr_33 [i_8] [i_8] = ((-6008484015014457625 < (((-(arr_2 [i_8] [i_9] [i_8]))))));
            arr_34 [i_8] = (arr_3 [i_9 + 1] [i_9 - 1]);
        }
    }
    var_18 *= (max(32767, -2147483643));
    #pragma endscop
}
