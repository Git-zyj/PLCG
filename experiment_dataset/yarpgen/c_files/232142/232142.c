/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((min((var_11 / var_10), (min(var_1, var_1)))) & ((-(var_6 || var_18)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] [19] [14] = ((!(((((max(26, -26))) ? ((((arr_1 [i_0 + 1]) ? (arr_3 [i_0 + 1] [i_0 + 1]) : (arr_2 [i_0 - 1] [11])))) : (max(2491195016079064427, (arr_3 [12] [3]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_20 = (max(((((~-27) < (!var_9)))), var_10));
                            var_21 = (2047 ^ (((((max((arr_2 [i_0 + 1] [i_3]), (arr_3 [i_2] [i_2]))))) & (min((arr_8 [i_0] [i_0]), var_15)))));
                        }
                    }
                }
                var_22 = ((+((30938 ? -10263 : (min((arr_0 [i_0 - 2] [16]), var_14))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            {
                var_23 *= (max(-17604, (((~-32) >> ((((var_15 << (((arr_11 [9]) - 53604)))) - 7940980783219474429))))));
                var_24 = (((arr_11 [i_5 + 1]) ? ((max((arr_5 [i_5 - 1] [i_5 + 1] [i_5 - 1]), (arr_11 [i_5 + 1])))) : ((max((!var_13), (0 > var_11))))));
            }
        }
    }
    #pragma endscop
}
