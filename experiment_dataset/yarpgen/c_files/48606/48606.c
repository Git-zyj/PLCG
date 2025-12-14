/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(-68, var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_21 = (min(var_21, (((max(-1419485750579897971, -2004709299))))));
                            var_22 = (max(var_22, ((max((arr_2 [i_1]), ((((arr_4 [i_0] [i_2] [i_3]) >= ((var_19 / (arr_4 [i_1] [0] [i_3])))))))))));
                            var_23 = (max(var_23, var_18));
                            arr_10 [i_3] [i_1] [i_2] [i_3 + 1] = (arr_5 [i_2] [i_2] [i_2]);
                        }
                    }
                }
                arr_11 [i_0] [i_0] [i_1] = ((((min((~var_6), ((1 ? (arr_1 [i_0]) : 1))))) ? ((((((max(62744, 45716)))) & ((~(arr_9 [i_0] [i_0] [i_1] [i_1] [i_0])))))) : var_18));
                var_24 = min((max(var_6, var_17)), ((((var_19 <= -30845) <= (((arr_3 [3] [i_1] [19]) >> (var_4 + 5071468658393475299)))))));
                arr_12 [5] = 8101;
            }
        }
    }
    #pragma endscop
}
