/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [1] [i_1] [0] [i_4] = (min((arr_9 [i_1 - 2] [i_1 - 2] [i_1]), ((-168434915461352512 ? 6108017103813089291 : 139611588448485376))));
                                arr_15 [i_1 - 3] [i_2] [i_3] [i_1] = ((((max((max(var_15, 8191)), (arr_0 [i_0] [i_2])))) | (((arr_0 [i_1] [i_1 - 1]) | (arr_0 [i_1] [i_1 - 1])))));
                                arr_16 [i_4] [i_1] [i_1] [i_2] [i_1] [i_1] [i_0] = (((max((max((arr_13 [i_0] [i_1] [i_2] [i_3] [i_4]), (-9223372036854775807 - 1))), 8161706792950605829)) << (((min((((arr_5 [1] [1] [i_2]) ? var_2 : var_15)), -var_2)) + 242))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                arr_24 [i_6 - 2] [i_1] [i_1] [0] = (+((var_18 - (((max((arr_13 [i_1] [i_1] [i_1] [i_6] [2]), var_14)))))));
                                var_20 = (arr_7 [i_6]);
                                var_21 = (min((max((~2047), ((113 ? -8161706792950605853 : 3667879832859480054)))), (arr_11 [1] [i_1] [i_1] [i_1 - 1] [i_1] [i_1] [6])));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 15;i_9 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_10 = 3; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 17;i_12 += 1)
                        {
                            {
                                var_22 += (max(((-(((arr_34 [i_8] [i_9] [i_9] [i_10]) ? 2 : (arr_28 [i_8]))))), (max((arr_37 [i_10 - 2] [i_10 - 2] [i_10] [i_10] [7] [i_10 - 1] [i_9 + 1]), var_16))));
                                var_23 = (max(var_23, (((~(((arr_33 [i_8] [i_9 - 1] [i_10 + 1]) ? (arr_27 [4]) : 6324461248085635256)))))));
                                arr_38 [i_8] [i_8] [1] [i_8] [i_8] = ((-31469 ? 1 : -1237));
                                arr_39 [i_8] [i_8] [i_8] = ((((min((0 * 0), (min(var_9, (arr_31 [i_8] [i_10] [5])))))) ? (110 ^ 3667879832859480044) : ((max((arr_34 [i_9] [i_9] [i_9] [i_9]), (arr_26 [i_9] [11]))))));
                            }
                        }
                    }
                }
                var_24 = 1419667498;
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        {
                            arr_46 [i_8] = (((arr_34 [i_14] [i_13] [1] [i_8]) >> (((((min(70, 3667879832859480054)) | 31)) - 90))));
                            arr_47 [i_8] [i_8] [i_8] [i_14] [i_8] = (arr_45 [i_8] [i_8] [i_13] [i_13] [i_8] [1]);
                            var_25 = (max(var_25, ((min((((!(var_8 || -1465014715807442503)))), var_8)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
