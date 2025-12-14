/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_10 = (arr_5 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {

                            for (int i_4 = 2; i_4 < 13;i_4 += 1)
                            {
                                var_11 = (max((!var_4), (!var_9)));
                                arr_13 [i_0] [i_0] [5] [12] [i_0] [i_0 - 1] [i_0] = ((~(1 != 1)));
                            }
                            arr_14 [i_0] [i_1] [i_0] [i_3] = min((arr_8 [i_0] [10] [i_0] [i_3]), 1);
                            var_12 = (min(var_12, var_0));
                        }
                    }
                }
                var_13 = 1;
                var_14 = 1;
            }
        }
    }
    var_15 = 1;
    var_16 = 26787;
    var_17 = -48;
    var_18 = (~9);
    #pragma endscop
}
