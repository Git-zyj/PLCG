/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 1;
    var_19 = (((6550035522940709207 < 1) ? (~var_9) : var_10));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_11 [i_0 + 2] [4] [i_1] [i_2] [i_2] = (arr_9 [i_2] [0] [8] [i_1] [i_2]);

                            for (int i_4 = 2; i_4 < 9;i_4 += 1)
                            {
                                var_20 = (min(var_20, ((max(var_1, (arr_12 [i_2]))))));
                                arr_14 [i_2] = ((-(arr_0 [i_1])));
                            }
                        }
                    }
                }
                var_21 = (!1);
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 8;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_22 = (min(var_22, (min(-1362945904, var_10))));
                            arr_20 [i_6] [i_5] = var_6;
                        }
                    }
                }
                arr_21 [i_0 - 1] [i_0 - 1] [i_1] = (((((21764 << (var_9 - 21562)))) ? var_9 : ((-((-(arr_17 [i_0] [i_0])))))));
                var_23 = (max(var_23, (((((((arr_19 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0]) + ((max((arr_2 [i_0] [5]), var_8)))))) ? var_12 : (arr_7 [i_1] [i_0 + 2] [i_0] [i_0]))))));
            }
        }
    }
    #pragma endscop
}
