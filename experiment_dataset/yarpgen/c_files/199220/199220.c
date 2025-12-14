/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199220
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
                var_16 = (0 * 0);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_17 = (arr_10 [i_0] [3] [6]);
                            arr_14 [i_1] = (arr_10 [i_0] [i_1] [i_2]);
                            arr_15 [i_0] [i_1] [i_0] [0] = (((arr_5 [i_1 - 2] [i_1 + 1] [i_1 + 2]) < (arr_6 [i_1 + 2] [i_1 + 2])));
                        }
                    }
                }
                var_18 = (max(var_11, ((((arr_6 [i_1 + 1] [i_1 - 1]) ? (arr_6 [i_1 + 1] [i_1 - 1]) : (arr_6 [i_1 + 1] [i_1 - 1]))))));
            }
        }
    }
    var_19 = ((((((0 ? var_1 : var_12)))) ? (((((var_9 ? var_12 : var_12))) ? -0 : var_0)) : var_12));
    var_20 = ((((((((5 ? 0 : 82))) ? (-1 - var_2) : ((max(var_4, var_5)))))) ? 255 : ((((max(var_5, var_0))) - 24119))));
    #pragma endscop
}
