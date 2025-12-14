/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -32750;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = (min(var_14, ((((((((max(var_0, 3272541076))) ? -var_10 : ((var_10 * (arr_1 [i_4])))))) ? ((((((arr_7 [i_4]) / var_8))) ? 0 : (((min((arr_2 [i_3 + 1]), var_0)))))) : (-1607722036 / var_7))))));
                                arr_14 [i_2] [i_3] [i_3] = ((((var_5 || var_8) ? (arr_0 [i_0 + 1]) : ((((arr_1 [i_3]) && 56421))))));
                                var_15 = ((!(((18446744073709551584 >> (var_1 - 143470548164414957))))));
                                var_16 = 5511;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_1] [i_2] [i_0] [i_6] = (((1607722036 || 56421) && (((var_11 ? 21 : ((var_4 ? var_10 : -1607722022)))))));
                                var_17 = ((((((32749 ? var_0 : 0)) | (arr_15 [i_6] [i_5] [i_2] [i_0])))) ? (((arr_4 [i_0] [i_1] [i_2]) ? (((16487966665682150250 != (arr_10 [i_2])))) : (~var_2))) : ((max(((((arr_19 [i_2] [i_1] [i_2] [i_5] [i_6]) == 72))), (arr_13 [i_0] [i_1] [8] [i_2] [i_5] [i_0])))));
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    arr_23 [i_0] = 20;
                    arr_24 [11] [i_1] [9] &= (max(9115, (((var_10 < 6906357663889764947) ? ((-(arr_7 [i_0]))) : (min(1607721999, var_11))))));

                    for (int i_8 = 4; i_8 < 10;i_8 += 1)
                    {
                        arr_28 [i_0] [i_0] [i_7] [i_7] = ((-(((1607722036 / 1) ? ((max((-32767 - 1), var_12))) : var_4))));
                        arr_29 [i_0] [i_1] [i_0] [i_7] [i_0] [i_8 - 2] = ((((max(var_4, var_10))) != var_4));
                    }
                    arr_30 [4] [i_1] [i_7] = ((((min(0, (arr_8 [i_0 - 3] [i_1] [i_7] [i_1])))) / -28));

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        var_18 = (((arr_18 [i_9] [i_1] [i_7] [i_1] [i_0]) ? var_2 : (-32767 - 1)));
                        var_19 = (!var_9);
                    }
                }

                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    arr_36 [i_10] [i_10] = ((-1926 ? 0 : 246));
                    var_20 = ((!((((arr_34 [4] [i_1] [i_10] [2]) ^ (13607 ^ 4294967295))))));
                }
            }
        }
    }
    var_21 = (max((((-var_9 ? (~var_2) : (min(var_11, var_4))))), (((~var_1) >> (var_10 - 183)))));
    #pragma endscop
}
