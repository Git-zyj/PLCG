/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((!1) >> ((((var_12 ? var_2 : 0)) - 3618928029))))) ? (~var_0) : ((((min(var_16, 255))) ? var_9 : var_1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_21 = ((!(((~((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [14])))))))));
                arr_6 [1] [i_1] [1] &= (~13);
                arr_7 [i_0] [i_1] = (((arr_3 [i_1] [i_1 + 2]) > ((max(var_14, 65535)))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_14 [i_1] [i_1] = (((arr_5 [i_0] [i_0] [4]) < (arr_10 [i_0] [i_1])));
                            var_22 &= (arr_13 [i_3 - 3] [22] [i_1 + 3]);
                            arr_15 [i_0] [i_0] [1] [i_0] [i_0] [i_0] &= ((((max(var_12, 1))) ? (((arr_0 [i_1 + 3] [i_2 - 2]) ? var_3 : 1)) : (~var_16)));
                            var_23 = ((~(max((arr_5 [i_1 - 1] [i_2 + 1] [i_3 - 1]), (arr_12 [4] [i_2 + 1] [i_3 - 1])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
