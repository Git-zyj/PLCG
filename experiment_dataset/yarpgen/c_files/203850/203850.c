/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += ((!((max(var_8, var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_2] [i_0] = (max(((-(arr_0 [i_3]))), ((max(60121, 104)))));
                            var_14 = (min(var_14, ((max((((arr_0 [i_0]) ? var_10 : 5104)), (arr_8 [i_0] [i_0] [0] [i_0] [i_0]))))));
                        }
                    }
                }
                var_15 = (arr_8 [i_0] [i_1] [i_0] [i_1] [i_1]);
                var_16 = (((((((((arr_6 [i_0]) ? (arr_5 [i_0] [i_1] [i_1] [i_1]) : (arr_0 [1])))) ? (arr_2 [i_1 - 1] [i_1 - 1] [i_1 - 3]) : 0))) ? (arr_4 [i_1 - 1] [i_1 - 1]) : (!var_6)));
            }
        }
    }
    var_17 = (max(var_6, (~var_9)));
    #pragma endscop
}
