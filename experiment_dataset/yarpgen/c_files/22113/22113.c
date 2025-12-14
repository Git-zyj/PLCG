/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 = (max(var_20, (((!((max(var_18, -39))))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_21 += (arr_0 [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_0] [i_4] = ((((arr_0 [7]) | var_18)));
                                var_22 = ((251 ? ((max((arr_4 [i_1 + 2] [i_1 - 1]), (arr_4 [i_1 + 2] [i_1 - 1])))) : ((-(arr_4 [i_1 + 2] [i_1 - 1])))));
                                arr_14 [i_0] [i_1 - 1] [i_2] [i_2] [i_0] &= (min(((((arr_3 [i_1 - 1] [i_1 + 2]) > (~16)))), (max((arr_10 [i_0] [i_0]), (arr_10 [i_4] [i_4])))));
                            }
                        }
                    }
                    var_23 -= ((((max((arr_9 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0]), var_1))) ? ((~(arr_3 [i_1 - 1] [i_1 + 1]))) : -9));
                }
            }
        }
    }
    var_24 = min(var_0, var_10);
    #pragma endscop
}
