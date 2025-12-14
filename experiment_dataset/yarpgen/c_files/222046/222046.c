/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!(!19));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_17 -= (((arr_1 [i_0] [i_1]) ? (((2 ? 6092772761043538622 : -36))) : (min(var_8, (6092772761043538622 + var_6)))));
                var_18 = var_1;
                var_19 = (max(var_19, (!221)));
                var_20 = (((((arr_0 [i_1]) < 1)) ? ((-(arr_0 [i_0]))) : ((min((arr_0 [i_0]), (arr_0 [1]))))));
                var_21 = (min(var_21, 6092772761043538622));
            }
        }
    }
    var_22 = var_5;
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                var_23 = ((-(((arr_7 [i_2 + 2] [i_2 - 2]) % 32752))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        {
                            arr_16 [i_3] [i_3] [i_4] [i_3] = ((-(arr_10 [i_2 + 2] [i_3])));
                            arr_17 [i_2] [i_3] [i_2 - 1] [1] = 1;
                            arr_18 [0] [i_3] [i_3] [i_2] = max(-634472847, ((!(arr_15 [i_2 - 1] [i_3] [i_3] [i_3] [i_5]))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
