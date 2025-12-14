/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 = var_11;
        var_20 = -2090683286;
        var_21 = var_8;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        arr_8 [4] [3] = var_11;
        var_22 = ((arr_0 [i_1 - 2]) && (arr_1 [i_1 - 2]));
        var_23 = (arr_5 [i_1 - 1]);
        arr_9 [i_1] = (var_12 == (((((arr_5 [i_1]) == (arr_7 [4]))))));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            arr_17 [i_2] [i_3] = ((-(((arr_14 [i_2] [3] [i_3]) ? (arr_14 [i_2] [i_3] [i_3]) : (arr_14 [i_2] [i_2] [i_2])))));
            arr_18 [i_3] [i_3] [i_2] = (max(var_14, ((-((~(arr_10 [i_3])))))));
            var_24 -= ((((var_15 / (max((arr_2 [i_2]), 292654422073742829)))) >> ((((-1840931506 ? 5655598812126076160 : 13)) - 5655598812126076121))));
            var_25 = (-(arr_11 [i_3]));
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            arr_22 [16] [i_4] |= 11;
            var_26 = ((((max((~var_17), (arr_19 [i_2] [i_2] [i_4])))) ? (max((arr_0 [i_4]), (max((arr_12 [i_2]), 3631380942670425342)))) : ((((((-(arr_16 [i_2] [i_4])))) ? ((~(arr_12 [i_2]))) : -var_10)))));

            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                var_27 = (min((!var_15), (0 || 0)));
                arr_25 [i_2] [i_4] [i_5] [i_2] = ((((arr_23 [i_2] [i_4] [i_4] [i_2]) ? (arr_13 [i_2]) : ((var_16 ? var_9 : 0)))));
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                {
                    var_28 = (((((arr_20 [i_2]) & (arr_16 [15] [i_2]))) << ((((-(((var_1 && (arr_1 [i_6])))))) + 37))));
                    var_29 = (max((arr_2 [18]), (-759704972566722080 + -2868568861134466735)));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            {
                                var_30 = ((((var_14 ? -var_16 : ((((arr_26 [i_6] [i_6] [i_9]) ? (arr_13 [i_6]) : 49515))))) * (((max(var_2, (arr_20 [i_2])))))));
                                var_31 = ((max((arr_10 [i_2]), var_15)));
                                var_32 = (min(35124, 204));
                                var_33 = var_6;
                                var_34 = (max(((2982509460 + (!2982509472))), 0));
                            }
                        }
                    }
                    arr_36 [12] [i_2] [i_6] [i_7] = (((arr_32 [i_2]) && ((min((arr_28 [i_7]), var_1)))));
                }
            }
        }
    }
    var_35 = var_2;
    #pragma endscop
}
