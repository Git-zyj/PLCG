/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-(var_7 || var_8)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = var_7;
                var_11 ^= 195020394;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_12 ^= ((!((min((arr_0 [i_2]), var_1)))));
                            var_13 = (18618 ? -195020396 : 195020376);
                            var_14 ^= (min((((max(var_7, (arr_0 [i_2]))))), (max((((arr_0 [i_2]) ? (arr_7 [i_0] [i_1] [i_2] [i_2]) : var_6)), (arr_7 [i_1 + 2] [i_1 + 1] [i_1] [i_2])))));
                        }
                    }
                }
                var_15 = (((max((arr_6 [i_0] [i_0] [i_1 + 2] [i_1 + 1]), var_6)) > (arr_1 [1] [i_1 + 1])));
            }
        }
    }
    var_16 = (max(-var_2, -195020394));
    #pragma endscop
}
