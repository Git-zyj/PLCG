/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_15 = (arr_1 [10]);
                    var_16 = ((var_8 ? (224 || 0) : ((var_9 >> (65312 - 65291)))));
                    arr_8 [3] [i_1] [i_1] = (min(-120, ((-(arr_5 [i_1 + 1] [i_1 + 1])))));
                }
                for (int i_3 = 3; i_3 < 15;i_3 += 1)
                {
                    arr_12 [2] [i_3] = (max(2319391362, -9899));
                    var_17 = (min(var_17, ((min(6892, (min(-3406, -120)))))));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_18 = arr_4 [6] [i_1] [0];
                                arr_21 [i_0] [i_1 + 1] [1] [i_4] [i_5] [i_6] = ((arr_5 [i_1 + 1] [i_1 + 1]) ? var_11 : (arr_19 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]));
                            }
                        }
                    }
                    var_19 = (arr_14 [i_1 + 1] [13] [i_4]);
                    var_20 = (arr_6 [i_0] [1] [i_1 + 1] [i_0]);
                    arr_22 [i_4] [i_1] [i_0] = 119;
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        {

                            for (int i_9 = 0; i_9 < 16;i_9 += 1)
                            {
                                var_21 = (max(var_21, var_8));
                                arr_31 [10] = (max((min((arr_18 [i_1] [i_1 + 1] [i_7]), (arr_25 [i_0]))), var_12));
                                var_22 = ((((min(-5657631056550948655, 4266))) >> (var_8 + 1357037073)));
                                var_23 = (max(var_23, ((max(var_11, 18446744073707454464)))));
                                var_24 = (arr_25 [13]);
                            }
                            var_25 = -1712188672;
                            var_26 = ((((min(var_0, (arr_17 [0] [i_8])))) ? (~var_14) : (max(0, -5657631056550948655))));
                            var_27 = var_7;
                            var_28 = ((((max(var_14, var_11))) ? ((max(15, 65311))) : (((min(var_9, var_2))))));
                        }
                    }
                }
            }
        }
    }
    var_29 = (13 / 6884);
    var_30 = (((-9223372036854775807 - 1) ? var_11 : var_10));
    var_31 = (!var_3);
    #pragma endscop
}
