/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((max((var_1 / var_9), var_12)) | (((-5485667765035003981 ? var_15 : (0 | var_5))))));
    var_21 = (min((max(((min(var_19, var_1))), 1)), ((min(124, var_14)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_22 += ((var_8 || (((arr_4 [9] [5] [i_2] [2]) == 29))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_13 [10] [9] [i_1] [1] = 1;
                                arr_14 [9] [6] [0] [11] [i_4] [1] = (max((~-3172), (arr_10 [1] [3] [10] [1] [6] [11] [10])));
                            }
                        }
                    }
                }
                var_23 = (((((((0 && (arr_5 [10])))) * 31)) >> (13758595773542636895 - 13758595773542636869)));
                var_24 ^= ((!((((min((arr_9 [10] [10] [1] [i_1] [6] [i_1]), var_12)) << (((max(var_1, var_15)) - 9097338126098593005)))))));
            }
        }
    }
    #pragma endscop
}
