/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (arr_0 [i_1] [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((var_11 != (arr_3 [i_4 - 3] [i_1] [i_4 - 2])));
                                arr_15 [i_2] [14] [i_1] [4] [i_2] = (arr_9 [i_1]);
                                var_16 = ((!(arr_12 [i_0] [i_0])));
                            }
                        }
                    }
                }
                arr_16 [i_1] = ((-122 ? 15411 : 104));
                var_17 = (min(var_17, (((((!((max((arr_0 [i_0] [i_0]), var_14))))) || var_11)))));
            }
        }
    }
    var_18 = ((!(((((var_1 ? 125 : var_6)) * ((max(-78, var_11))))))));
    #pragma endscop
}
