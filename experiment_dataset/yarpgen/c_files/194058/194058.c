/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_12 += var_6;
        var_13 = (((~var_6) < (((((var_5 ? var_1 : var_4))) | var_5))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_0] = (min((arr_6 [i_0] [i_0] [i_3]), (~var_3)));
                        var_14 += 0;
                        arr_10 [i_0] [i_0] = (max(((((((arr_5 [i_2 + 1] [i_1]) ? var_9 : var_0)) % var_1))), (max(18, (arr_2 [i_0])))));
                        var_15 = (min((65524 && 31), (~-var_11)));
                        var_16 |= ((~(max((arr_6 [i_1] [i_1] [i_2 + 1]), -var_1))));
                    }
                }
            }
        }
        arr_11 [i_0] = ((65524 | (((arr_5 [i_0 - 3] [i_0]) ? (~var_2) : (arr_0 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    arr_19 [i_0] [i_0] [i_0] [i_5] = var_9;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_17 = ((((((arr_8 [i_0 - 3] [i_0 - 1] [i_0] [i_0 + 2]) < (arr_8 [i_0 - 3] [i_0 - 1] [i_0] [i_0 + 2])))) ^ (min(((~(arr_6 [i_0] [i_5] [i_0]))), 8))));
                                arr_24 [i_0] [i_0] = ((((((5 ? 65534 : var_2)))) ? ((((max(30, -2147483636))) ? 14 : var_9)) : ((min(53541, var_3)))));
                            }
                        }
                    }
                    var_18 = (arr_13 [i_0]);
                }
            }
        }
    }

    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        var_19 = (min((((arr_1 [i_8] [i_8]) ? (!var_1) : (~62))), (((arr_2 [i_8]) ? (var_7 < -25043) : ((((arr_13 [i_8]) < var_6)))))));
        var_20 = (arr_1 [i_8] [i_8]);
        arr_27 [i_8] = (max((var_9 ^ var_2), ((((arr_12 [i_8] [i_8]) == (arr_12 [i_8] [i_8]))))));
    }
    /* LoopNest 3 */
    for (int i_9 = 3; i_9 < 12;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 13;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                {
                    var_21 += ((-((max(13834, var_0)))));
                    arr_35 [i_11] [i_10] [i_10] [i_9] = (((max(971460761, -1387078484)) < 2879));
                    var_22 -= (((((13828 < (var_9 == var_10)))) < ((min(((max((arr_5 [i_10] [i_11]), (arr_17 [i_11] [i_11] [i_11] [i_9])))), (arr_1 [i_11] [i_10]))))));
                }
            }
        }
    }
    #pragma endscop
}
