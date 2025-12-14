/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_2] [i_3] = (((((arr_3 [i_0] [i_0] [i_0]) == 1)) ? (((arr_1 [i_2 + 1]) ? (arr_1 [i_2 + 1]) : (arr_1 [i_2 + 1]))) : 1));
                            var_10 = ((((96 ? (min(0, var_4)) : ((max(160, 0)))))) ? (arr_2 [i_0] [i_0]) : (~var_0));
                        }
                    }
                }
                var_11 = 0;
            }
        }
    }
    var_12 = ((((min(var_0, (!-1583723643)))) - (((!var_6) ? (min(0, var_4)) : (~var_9)))));
    #pragma endscop
}
