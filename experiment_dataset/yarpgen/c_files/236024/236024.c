/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_18 = (((min(var_12, (arr_3 [i_3] [i_1 - 4] [i_3])))));
                                var_19 = (((((-11229 / (arr_0 [i_0])))) ? (arr_6 [15] [i_0 - 1] [i_1] [i_1 - 1]) : var_2));
                            }
                        }
                    }
                    arr_11 [i_1] = ((var_0 ? ((~(min((arr_10 [i_0 + 1] [i_0] [15] [i_0] [i_0] [14]), (arr_4 [3]))))) : (((((~(arr_10 [i_0 + 1] [i_1] [i_1] [i_2] [4] [i_2]))))))));
                }
            }
        }
    }
    var_20 = var_14;
    var_21 = var_11;
    var_22 = var_3;
    #pragma endscop
}
