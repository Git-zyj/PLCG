/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((!4572443892309124853) ? 173 : var_8))) ? 4572443892309124850 : (!var_11)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [5] [i_1] [i_0] = ((!((min(0, (max((arr_0 [i_0] [i_0]), (arr_4 [i_0] [i_0] [i_0]))))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_2] [i_4] [i_4] = arr_9 [i_4] [i_1] [i_0];
                                arr_15 [i_0] [i_1] [i_0] [i_4] = 229;
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    var_14 = arr_0 [i_1 - 2] [i_1 - 1];
                    arr_18 [i_5] = 54;
                }
            }
        }
    }
    var_15 = (~-var_9);
    #pragma endscop
}
