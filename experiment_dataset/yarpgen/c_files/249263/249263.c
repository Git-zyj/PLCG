/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(((max(var_2, ((min(var_13, 13)))))), var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 ^= ((((((arr_1 [i_1]) ? 61443 : var_15))) ? (((((max((arr_4 [i_0] [i_0] [1]), 23)) >= (((-(arr_6 [i_2] [i_1] [i_1])))))))) : ((233 & (max((arr_3 [i_1] [i_1]), var_1))))));
                    var_21 = ((+(min((arr_2 [i_2] [i_0]), var_1))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_22 += 23651;
                                arr_14 [i_3] [i_3] [i_0] [i_3] [i_4] = (max(-246, (arr_11 [i_4] [i_3] [i_0] [i_2] [i_0] [i_0] [i_0])));
                                var_23 = (((~((3511441576 ^ (arr_11 [i_0] [i_1] [i_0] [14] [i_4] [i_1] [i_4]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
