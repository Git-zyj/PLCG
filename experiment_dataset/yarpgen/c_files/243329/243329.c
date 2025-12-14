/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (-12238 * (((((arr_2 [i_0] [i_0]) < (arr_0 [i_0] [i_0]))))));
        var_10 = ((62432 < ((((arr_2 [14] [i_0]) < var_4)))));
        arr_4 [i_0] = 5504573926030416413;
        var_11 = (-((var_6 % ((~(arr_1 [13] [i_0]))))));
        var_12 &= ((-(arr_2 [i_0] [i_0])));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        var_13 = ((!((!((min((arr_2 [i_1] [i_2]), (arr_9 [i_1] [16]))))))));
                        var_14 = (max((-557722951622091479 && var_5), -1));

                        for (int i_5 = 1; i_5 < 15;i_5 += 1) /* same iter space */
                        {
                            var_15 = ((-((-(arr_13 [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1])))));
                            arr_17 [i_1] [i_4] [i_3 - 1] [i_2] [i_1] [i_1] = (min((min((var_5 + var_5), 23246)), var_1));
                            arr_18 [i_2] [i_2] [i_1] [16] = ((~(((!(!47591))))));
                            arr_19 [i_1] [i_1] [i_1] [i_1 + 1] [13] = ((max((max(1426022253, 1), var_6))));
                        }
                        for (int i_6 = 1; i_6 < 15;i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_1] [i_2] [i_1] [i_4] [i_6] = var_9;
                            var_16 = ((arr_9 [i_1] [i_6 + 1]) ? (((((arr_21 [i_1] [1] [i_1 + 1] [0] [i_1]) || var_4)))) : ((9430882911156881869 << (44396 - 44351))));
                        }
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            var_17 = (arr_9 [i_1] [i_1]);
                            var_18 = (min(var_18, ((max((arr_21 [i_1] [i_1 + 1] [i_1 - 1] [8] [i_1]), (arr_22 [i_7] [i_7] [i_7] [16] [i_7]))))));
                        }
                    }
                }
            }
        }
        var_19 &= -9223372036854775804;
    }
    for (int i_8 = 1; i_8 < 10;i_8 += 1)
    {
        arr_28 [i_8 - 1] = var_9;
        arr_29 [i_8] = (max(-7508781173711835378, (((34678 / 6151877550969773286) | (arr_20 [i_8] [i_8] [i_8] [i_8])))));
    }
    var_20 = (min((var_9 || var_8), (max((var_2 || 104), (min(44004, var_2))))));
    #pragma endscop
}
