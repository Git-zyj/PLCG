/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (((arr_1 [i_0 + 1]) << 1));
                arr_7 [i_0] = (((16128 - var_8) + ((max(26674, ((min(16114, 9691))))))));
                var_10 = (min(var_10, ((((((arr_2 [i_0 - 1]) ? 3840 : (arr_1 [i_0 - 1]))) - 2654)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                var_11 = ((var_1 << (arr_9 [i_2] [i_3])));
                var_12 -= ((max(var_1, (arr_14 [i_2]))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_13 = (min(var_13, (((arr_18 [15] [i_2]) * (((49408 << (var_6 - 60))))))));
                            arr_21 [i_5] [1] [1] [1] = ((!(arr_17 [i_5] [i_5] [3] [i_5] [i_5])));
                            var_14 = 1;
                        }
                    }
                }
            }
        }
    }
    var_15 -= 17804;
    var_16 = (max(var_16, var_2));
    #pragma endscop
}
