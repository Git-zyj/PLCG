/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_6 || var_4) ? var_4 : (120 | var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [4] [i_1] [i_0 + 1] = ((((max((arr_5 [i_1 - 1] [i_0 + 1]), (arr_5 [i_1 - 1] [i_0 + 1])))) ? (arr_4 [i_1 - 1] [i_0 + 1]) : ((max((arr_5 [i_1 - 1] [i_0 + 1]), (arr_5 [i_1 - 1] [i_0 + 1]))))));
                arr_7 [i_0] [i_0] = (arr_2 [i_0 + 1] [i_1]);

                /* vectorizable */
                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    arr_12 [i_2] [i_2] [i_2] [i_1 - 1] = -1192898707;
                    arr_13 [i_0] [i_0] [i_0 + 1] [i_2] = (arr_4 [i_0 + 1] [i_1 - 1]);
                    arr_14 [i_0] [i_0] [i_2] [i_0] = ((1 ? 57669349 : 21429));
                    arr_15 [i_0] [i_2] = (var_3 & 1);
                }
                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    var_14 = var_11;
                    var_15 = -57669374;
                    var_16 ^= (min((((arr_2 [i_0 + 1] [i_1 - 1]) ? 18021393574365626171 : (arr_2 [i_0 + 1] [i_0]))), ((max(((4655 ? var_10 : var_11)), (arr_10 [i_0] [i_1] [i_1] [i_1]))))));
                }
            }
        }
    }
    var_17 = (~var_5);
    var_18 = (max(var_18, var_8));
    #pragma endscop
}
