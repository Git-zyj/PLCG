/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((~var_11) == ((109 ? var_1 : 440135227))))) >> ((-var_11 ? 1 : (var_5 != var_0)))));
    var_13 = 40681;
    var_14 = (((((((max(6878329677681663341, var_8))) ? (6878329677681663341 & var_8) : (~var_6)))) ? var_5 : var_6));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, 3854832084));
                                arr_10 [i_0] [i_0] [i_3] [i_2] [i_2] [i_4] [i_0] = ((min(((var_3 ? 214 : 1), (~24855)))));
                                var_16 = 1;
                                arr_11 [2] [i_1] [i_3] [i_3 + 2] [i_4] = 34;
                            }
                        }
                    }
                    arr_12 [i_0] = (arr_5 [5] [8] [i_2]);

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        arr_15 [i_1] &= (((arr_14 [i_0] [i_0] [i_0] [6] [i_0]) ? var_6 : 8724570378509227702));
                        arr_16 [i_0] [i_1] [i_2] [10] = (arr_5 [i_0] [i_1] [i_2]);
                    }
                }
            }
        }
    }
    var_17 = (min(-430410861959061596, 1));
    #pragma endscop
}
