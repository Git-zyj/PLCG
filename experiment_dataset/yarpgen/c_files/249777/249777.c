/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_1));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_12 = (max(var_12, ((((arr_3 [i_0] [i_1 - 2]) ? ((((((var_5 ? 10 : 13126)) >= 1)))) : (((arr_2 [i_0 - 1]) ? (arr_3 [i_0 + 1] [i_0 + 1]) : (arr_3 [i_0 + 2] [i_0 - 2]))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [13] [i_0 - 2] [i_4] [i_4] = ((~(~65520)));
                                var_13 += ((((!((max(var_5, (arr_5 [i_0 - 2] [i_1] [i_4] [i_3]))))))) ^ 31);
                                arr_14 [i_4] = (arr_11 [i_4]);
                            }
                        }
                    }
                }
                var_14 = ((arr_6 [i_0] [i_0] [i_0 + 1]) >= (min(58, var_8)));
            }
        }
    }
    #pragma endscop
}
