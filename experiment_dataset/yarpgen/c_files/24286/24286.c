/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= ((((var_11 ? var_15 : var_3))) ? var_17 : var_6);

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0 - 1] [i_0] = max((((arr_0 [i_0] [i_0]) | -24)), (((18446744073709551615 ? var_0 : (arr_0 [i_0 + 2] [i_0])))));
        arr_3 [i_0] |= ((var_13 ? (((max((arr_1 [i_0 - 2]), (arr_1 [i_0 + 1]))))) : (max((arr_0 [i_0] [i_0]), var_4))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_21 = (min(var_21, ((((arr_4 [5]) ? (~var_2) : var_13)))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_22 -= (((((5731561723322234034 ? 5731561723322234046 : (arr_6 [i_2 + 1] [i_2])))) ? var_6 : (((max(var_5, (arr_6 [i_2 - 1] [i_2])))))));
                        var_23 = 5731561723322234051;
                        var_24 = (((max((var_14 && 16389836694274305491), ((var_0 >> (var_4 - 6775923990683665013))))) - (min(-var_13, var_0))));
                        var_25 = (min(((-(max(1142856297, 203745460)))), var_1));
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_1] [i_3] = var_13;
                        arr_20 [i_5] [i_3] [i_2] [i_1] &= (max(12715182350387317564, (((3701687791086102729 ? (arr_6 [i_5] [i_5]) : (arr_6 [i_5] [i_5]))))));
                        var_26 ^= (((max(var_2, (((arr_18 [i_2] [i_3] [i_3]) ? (arr_6 [i_1] [i_1]) : 3701687791086102729)))) & ((max(((max(var_9, var_19))), (arr_5 [i_2] [i_2 + 1]))))));
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        var_27 -= ((((max((max((arr_5 [i_1] [i_6]), var_18)), (((511 ? var_15 : 38)))))) ? (((-(arr_21 [1] [i_1] [i_3] [1])))) : ((((var_10 == (arr_18 [5] [i_2] [i_3])))))));
                        var_28 *= (min(((((var_18 / (arr_13 [i_1] [i_1] [i_1] [i_3] [i_1] [i_3]))) * (arr_13 [i_6] [i_6] [i_3] [i_2 - 1] [i_2] [i_1]))), var_15));
                        var_29 *= 111;
                    }
                    var_30 = (min(var_30, -14745056282623448887));
                }
            }
        }
        arr_23 [i_1] [i_1] |= ((0 ? (((min(var_9, (arr_7 [i_1] [i_1] [i_1]))))) : 3701687791086102729));
    }
    var_31 = (max(var_31, ((((max(var_7, var_1)) != -var_0)))));
    var_32 *= ((((((~14745056282623448886) - var_13))) ? -var_8 : (max(14745056282623448862, 511))));
    var_33 += ((~((var_5 ? (~var_4) : var_3))));
    #pragma endscop
}
