/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_21 |= max(32755, (arr_2 [i_0]));
                            var_22 = (min(var_22, (((1 ? (min(168, (((arr_6 [i_0] [i_2] [10]) >> (arr_5 [i_1] [i_1]))))) : (((!(-127 - 1)))))))));
                            var_23 = (min(var_23, -9223372036854775800));
                            var_24 = (min(var_24, ((((((max(1, (arr_2 [i_0])))) + ((min((arr_5 [i_3] [i_2]), 30637))))) / -105))));
                        }
                    }
                }
                var_25 += (((arr_5 [i_0] [i_0]) ? (min((arr_4 [22]), (arr_2 [i_0 + 1]))) : (((max((arr_3 [14]), (min((arr_3 [16]), 1))))))));
            }
        }
    }
    #pragma endscop
}
