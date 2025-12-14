/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [6] = (((((-1 == (arr_1 [i_1]))) ? var_9 : (~2649790373))));
                arr_7 [i_0] [i_0] = 5679726826750245713;
                var_10 = 186;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_17 [i_2] [i_1] [i_2 + 1] [i_3] [i_4] = ((~(((32767 == (arr_12 [i_2]))))));
                                var_11 = (228 ? (min((arr_15 [10] [i_2 + 1] [i_2 + 3] [i_2] [i_2] [i_2 - 1]), 2912834835)) : (((2038192870 ? 1 : 89))));
                                var_12 = (min(var_12, (arr_10 [i_1] [i_0])));
                                arr_18 [i_1] [i_2] [i_2] [i_4] = (-((min(var_3, var_9))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = (min(var_13, var_9));
    #pragma endscop
}
