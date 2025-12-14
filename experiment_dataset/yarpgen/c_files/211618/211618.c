/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0] [i_1] = (arr_2 [i_0 + 1]);
                var_20 += ((((((arr_2 [i_0 + 1]) ? (arr_2 [i_0 + 1]) : 99))) ? (max(-6914262887007315330, var_1)) : (min((arr_2 [i_0 + 2]), -6914262887007315321))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_21 += ((((((arr_2 [i_0 + 1]) / (arr_2 [i_0 - 1])))) ? ((var_0 / (arr_2 [i_0 + 2]))) : (max((arr_2 [i_0 - 1]), (arr_2 [i_0 + 2])))));
                                var_22 = (min(var_22, ((((((max(17832938456553099104, 95)) >> (168 - 113))) - ((min((arr_10 [i_3] [i_1] [i_1]), 9223372036854775807))))))));
                                var_23 = (((((!(arr_4 [i_4] [i_4])) ? (~-5316208110131250943) : 2330375277))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
