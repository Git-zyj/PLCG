/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = 68;
                var_15 = (arr_0 [i_1] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_3] [21] = min(248, 1);
                            var_16 = (!((((arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1]) / ((max((arr_6 [20] [20]), 1)))))));
                            var_17 = (min(var_17, (((-(((arr_3 [i_1] [i_0]) % (arr_3 [1] [i_1]))))))));
                            var_18 += ((((((arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]) + (arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1])))) ? (323516974883795287 / -3641517391659607839) : ((((arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]) - (arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))))));
                        }
                    }
                }
            }
        }
    }
    var_19 = var_3;
    #pragma endscop
}
