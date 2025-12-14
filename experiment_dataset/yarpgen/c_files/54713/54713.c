/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(1789843416, var_6));
    var_21 = (min(var_14, var_18));
    var_22 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_1] [4] = (max(14, (max((arr_1 [13]), var_9))));
                var_23 ^= (arr_4 [i_0] [10]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_16 [i_2] [i_1] [i_4] [i_3] [i_4] [12] [i_1] = ((((3276790260 ? (arr_5 [i_1 - 2] [i_1 - 2] [i_1 + 1]) : ((3 ? 1 : (arr_13 [1] [i_1 - 1] [i_0] [10] [i_4]))))) ^ (((((var_4 ? 2954339905666669455 : -1255955205))) ? (!var_3) : var_2))));
                                var_24 = (min(var_24, ((min(((((min((arr_9 [i_1 - 1] [i_2] [i_3] [i_4]), (arr_14 [i_1] [i_2])))) ? (arr_4 [i_2] [i_2]) : (13 > 61433))), 1255955205)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
