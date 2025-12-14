/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_8));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = (arr_4 [i_1] [i_1 - 3] [i_0]);
                arr_5 [i_0] [i_1] = (((max(6512390711245225474, 1)) <= 1));
                var_15 = (max(var_15, ((((((+(((arr_3 [i_0 - 3]) ? var_10 : 3312167641))))) ? (max((1730429948 <= 27), ((3 ? var_2 : (arr_0 [1]))))) : var_5)))));
                arr_6 [i_0] = (max(8125106790087895252, -5166007109250739850));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1] [3] [i_0] = (max(((max(((var_6 && (arr_7 [i_0]))), var_12))), (arr_4 [i_0 - 4] [i_0] [i_0])));
                            var_16 = (min(var_7, var_3));
                            var_17 = (min(var_17, ((max(150, 2564537363)))));
                        }
                    }
                }
            }
        }
    }
    var_18 = var_4;
    #pragma endscop
}
