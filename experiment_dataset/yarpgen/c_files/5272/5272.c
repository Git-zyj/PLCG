/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    var_14 = ((23316 >> (65518 - 65501)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_15 = ((1389043198 - (arr_3 [i_1] [20] [i_4])));
                                var_16 = (arr_4 [i_0 + 1] [i_1 + 1]);
                            }
                        }
                    }
                    var_17 = max(((((~0) * var_5))), ((max(2905924104, var_4))));
                    var_18 += ((~(max((arr_2 [11] [i_0 - 1] [i_2]), (~var_9)))));
                    arr_12 [i_0] [i_2] [i_1] [i_2] = 0;
                    arr_13 [i_0] [i_2] [i_0] [i_0] = ((((min(65528, (arr_3 [i_0 + 1] [i_1] [i_1 - 3])))) ? ((((arr_3 [i_0 - 2] [i_0] [i_1 + 1]) || (arr_3 [i_0 + 1] [i_0] [i_1 - 2])))) : (arr_3 [i_0 - 2] [i_0] [i_1 - 1])));
                }
            }
        }
    }
    var_19 = min(var_6, ((((151 ? var_3 : var_10)) << (var_12 - 59))));
    var_20 = (max(((((min(var_4, var_5))))), (min(var_3, var_2))));
    #pragma endscop
}
