/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_0] = var_12;
                                var_21 = var_13;
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                {
                    arr_18 [i_0] [i_1] = (~var_17);
                    var_22 = (min(((~(var_2 ^ 59))), var_9));
                    arr_19 [i_0] [i_0] [i_5] [i_0] = ((var_14 ? -13217 : var_17));
                    var_23 = (max(var_23, var_14));
                    var_24 = ((~(((arr_9 [i_5] [i_1]) ? (!13216) : var_2))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 17;i_8 += 1)
                        {
                            {
                                arr_27 [i_0] [i_0] [i_6] [18] [14] = (13217 / (((arr_11 [i_0] [i_1] [i_6] [i_0] [1] [i_6] [i_6]) ? -4197001143824523116 : 2032)));
                                var_25 = (max(var_25, (((var_8 ? 38772 : (arr_4 [i_0] [i_0 - 1]))))));
                                var_26 = (var_18 ^ var_6);
                            }
                        }
                    }
                    arr_28 [i_0] [i_0] [i_1] [i_6] = -var_7;
                    arr_29 [i_0] [i_0] [i_0] [i_6] = ((var_4 & 1) | ((21475 | (arr_17 [i_0 - 1] [i_6] [i_0 - 1] [i_6]))));

                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        arr_32 [i_6] [1] [i_0] [i_9] [i_6] = ((arr_23 [i_9] [i_0 - 1] [i_0] [i_0] [i_0 + 1]) << (23951 - 23933));
                        var_27 = (13216 & var_18);
                        var_28 = ((((var_2 ? 702195448 : 1))) ? (arr_26 [i_0] [i_0 - 1] [i_0 + 1] [i_0] [i_0] [i_6]) : (var_3 < -4197001143824523116));
                    }
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        arr_37 [i_0] [i_0] [i_0] [i_1] [i_6] [i_10] = 3293451333;
                        arr_38 [i_0] [i_1] [i_6] [i_0] [i_10] [i_0] = var_11;
                    }
                    var_29 = (var_18 & var_17);
                }
            }
        }
    }
    var_30 ^= ((((((2082 ? 13217 : -13203)) + (min(-4197001143824523101, var_3))))));
    #pragma endscop
}
