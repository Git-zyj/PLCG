/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_8));
    var_17 = max(var_14, var_15);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            {
                var_18 = -21293;
                arr_4 [i_0 + 1] [i_1] = (!-var_10);
                arr_5 [i_1] = (arr_0 [i_1 - 3]);

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_10 [i_1] = (min((((arr_7 [i_0] [i_1 + 3] [i_0 - 3] [i_3]) << (var_9 - 54515))), (((arr_7 [7] [i_1 + 3] [i_0 - 2] [i_3]) ? (arr_7 [8] [i_1 + 1] [i_0 + 3] [i_3]) : var_8))));
                        var_19 = (max(var_19, (((~(min(var_7, (~var_12))))))));
                        arr_11 [i_0] [i_1] [i_3] [i_3] |= (min((max((min(var_8, var_10)), var_1)), (((((min(var_6, (arr_0 [7])))) && -21293)))));
                        arr_12 [i_1] = (min((!var_4), ((var_3 ? var_10 : var_0))));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 9;i_4 += 1) /* same iter space */
                    {
                        var_20 = ((((((var_10 || (arr_2 [i_1]))))) >= var_6));
                        arr_15 [i_1] [9] [i_2] [i_4] = ((~(arr_8 [i_1] [i_1] [i_2] [i_4 - 1])));
                    }
                    for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_0] [i_1 - 1] [i_1] [i_5] [i_5 - 1] = (var_11 < var_13);
                        arr_19 [i_0 - 2] [i_1] = (((var_5 | ((max(-21283, 2743839844))))));
                    }
                    var_21 = (min(var_21, ((((((((arr_0 [i_0]) < (arr_7 [i_0] [i_1] [i_2] [i_2]))))) < (arr_16 [2] [i_1 - 1] [i_2] [i_0 - 1]))))));
                    var_22 = (max(var_22, -52));
                    var_23 *= var_5;
                    arr_20 [i_0] [i_0] [4] |= ((((((arr_6 [i_0 + 4] [i_1 - 2] [i_1 + 2]) ? var_8 : var_3))) ? (var_1 && var_11) : 1551127452));
                }
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    arr_24 [i_1] [i_1] = (((max(var_8, (var_1 < var_6)))));
                    var_24 = ((-(!var_1)));
                }
                for (int i_7 = 4; i_7 < 8;i_7 += 1)
                {
                    var_25 = ((-(var_2 > var_12)));
                    var_26 = -80161574;
                    var_27 = (((((((arr_8 [i_1] [i_0 + 1] [i_0] [i_0 - 2]) && 1551127451)))) + (max(2743839865, (min(1551127443, -67))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                arr_32 [i_0 - 1] [i_0] [9] [i_1] [i_0] = (arr_21 [i_0 - 3] [i_0 + 1] [i_0 - 3] [i_0]);
                                var_28 = ((67 ? ((((var_1 ? var_0 : var_2)))) : var_0));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
