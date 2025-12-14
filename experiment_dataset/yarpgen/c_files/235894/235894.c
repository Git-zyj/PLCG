/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += var_10;
    var_12 = ((1 ? ((max(0, var_7))) : (((7657939348702267244 >= 1) & ((max(var_7, var_5)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_2] [i_0] [i_0] = 3557929256420500912;

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                        {
                            arr_11 [i_0] [i_1] [i_0] [i_3] [i_4] = min((arr_8 [3] [i_1] [i_1 - 1] [i_0]), var_3);
                            var_13 = (min(var_13, (((var_4 ? -var_1 : (arr_7 [i_0] [i_2] [i_3] [i_4]))))));
                            arr_12 [i_4] [i_0] [i_2] [i_0] [i_0] = ((((((!(arr_0 [i_0]))))) ? (arr_0 [i_0]) : (arr_3 [i_3])));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            var_14 = (arr_2 [i_0] [i_5]);
                            arr_16 [i_0] [i_1 - 1] = var_4;
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            arr_19 [i_0] = 1;
                            arr_20 [i_0] [i_1] [i_2] [i_1] [i_6] = (((((((min(3, var_5))) ? (~var_5) : (arr_1 [i_1 - 1] [7])))) % ((((-(arr_8 [i_0] [i_2] [i_1 + 1] [i_0]))) - 1))));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_3] [i_6] [i_6] = ((!((((((1 ? (arr_10 [i_0] [i_1] [i_2] [i_3] [5]) : 21070))) ? -47 : -1019233888990637190)))));
                            var_15 = (((~(arr_1 [i_3] [1]))));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            var_16 = var_0;
                            arr_25 [i_0] [i_3] = (min(-8178609085109966570, (arr_10 [i_3] [i_1 + 1] [0] [i_1 - 1] [i_1])));
                            var_17 += (((((25515 ? (((-(arr_1 [i_7] [i_3])))) : (arr_23 [i_0] [i_1 + 2] [i_2] [i_3] [i_7])))) ? ((var_4 << (var_6 - 27874))) : (arr_18 [7] [i_3] [i_3] [i_3] [1])));
                            arr_26 [i_0] [2] [i_2] [2] [i_2] = ((((max(478452225, var_1))) ? (arr_2 [i_3] [16]) : ((((min(-20073, (arr_15 [i_1] [i_2] [i_3])))) ? -11217 : (var_0 | 1)))));
                            arr_27 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] |= ((((((arr_5 [i_1 + 2] [i_1 + 2]) ? (arr_4 [i_2] [i_2] [i_2]) : 1)) >> (((~var_10) + 26144)))));
                        }
                        var_18 |= arr_17 [i_1 + 1] [i_1] [i_2];
                    }
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        arr_31 [i_0] [i_0] [i_0] [i_0] = min(199, (var_5 ^ var_7));
                        arr_32 [i_0] [i_2] [i_8] [8] [i_0] &= ((15813 == (((arr_30 [i_2] [i_2] [i_1 - 1]) ? -1 : 1))));
                    }
                    for (int i_9 = 3; i_9 < 19;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            var_19 += 16;
                            var_20 = (min(((-(arr_4 [i_0] [i_1] [i_2]))), var_6));
                            var_21 = (arr_2 [i_0] [i_1 - 1]);
                        }
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            var_22 = (arr_28 [i_0] [i_1] [i_1]);
                            var_23 = ((min(-1250495206146112067, ((max(-22199, (arr_7 [i_0] [i_0] [i_9] [i_11])))))));
                        }
                        arr_41 [i_0] [i_0] [i_2] [i_9] [i_0] = (!var_10);
                        var_24 = (max(var_24, ((((((((min(7, 1))) && var_5))) == (~65535))))));
                        var_25 = (((var_3 != (arr_39 [i_9 - 2] [i_9 + 2] [i_2] [i_9] [i_1] [i_1 + 2]))));
                    }
                    var_26 ^= ((max((120 | 18), 22)));
                    var_27 = ((((max(1, 52567))) ? ((max((max(-1895387710, -642217449)), ((max(var_7, 109)))))) : ((min((arr_40 [i_0] [i_0] [i_0] [i_1] [i_2]), 117700129651242845)))));
                    arr_42 [i_0] [i_0] [i_1 - 1] [i_2] = ((~((+(min((arr_23 [i_2] [i_2] [13] [i_2] [i_2]), 1))))));
                }
            }
        }
    }
    #pragma endscop
}
