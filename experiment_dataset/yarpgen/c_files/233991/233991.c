/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((((min(var_4, var_10))) || (53 >= var_10))))) != (min((min(var_4, 5273391546313698050)), ((min(184, var_1)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 = (min(((((((arr_5 [14] [14] [1] [i_2]) != (arr_7 [i_0] [i_0] [9] [i_1])))) | 65535)), ((((arr_5 [7] [i_1] [i_0] [i_0]) != (arr_5 [i_0] [i_0] [i_1] [i_2]))))));
                    var_16 = ((((((arr_5 [i_0] [i_0] [12] [i_2]) || (~15373050))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] |= (arr_6 [i_0] [i_1] [0] [0]);
                                var_17 |= (min(((((((arr_12 [i_2] [5] [i_2] [5] [i_4]) != (arr_2 [i_0])))) % ((((arr_2 [i_0]) || 237))))), (arr_9 [i_0] [i_2])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
