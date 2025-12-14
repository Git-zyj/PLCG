/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((~var_11), (((var_11 && ((min(var_8, var_8))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = (min(((min(var_1, 27507))), var_2));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_14 = ((min(((var_5 ? var_10 : 1), (arr_7 [i_0] [i_0])))));

                            for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                            {
                                var_15 = (((((arr_10 [i_3 + 4] [i_3 + 2] [i_3 + 2] [i_3] [i_3 + 4] [i_3 - 3]) - (min(var_6, (arr_3 [i_0]))))) != ((11886652960842623308 ? (arr_10 [12] [i_2] [i_2] [i_0] [i_0] [i_2]) : (arr_9 [i_3 - 1] [i_3 - 2] [i_3 - 3] [i_3 + 3])))));
                                var_16 = (min((~17320069980207899252), (arr_9 [i_3 + 3] [i_4] [i_3 + 3] [i_4])));
                                var_17 = var_10;
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                            {
                                var_18 = ((var_9 == (((3911684074341710323 | (arr_7 [i_1] [i_1]))))));
                                var_19 = (arr_10 [i_0] [i_0] [4] [i_0] [i_0] [11]);
                                var_20 = -64;
                            }
                            for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                            {
                                var_21 = (arr_10 [i_0] [i_1] [12] [i_2] [15] [i_6]);
                                var_22 = max((min(-4476741706282736864, 64401)), (arr_15 [i_0] [i_0] [i_3] [i_2] [i_0] [i_6]));
                                var_23 += ((0 ? 7922 : 24780));
                                var_24 = 1;
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                            {
                                var_25 = (min(var_25, (arr_5 [i_3] [i_3 - 1] [i_3 - 2])));
                                var_26 = (((arr_11 [i_0] [i_3 + 1] [i_3 + 3] [i_3] [i_3 - 3] [i_3 - 3] [i_3]) ? var_11 : (((5185 ? var_3 : (arr_8 [i_3] [i_3]))))));
                                var_27 = ((230 ? 19040 : 54003));
                                var_28 = (~1);
                            }
                            var_29 = 6629;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
