/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!((max(var_6, (!6926550936098495848))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0 - 1] = ((~((((min(var_1, var_8))) ? ((var_9 ? (arr_6 [i_0] [i_0]) : (arr_0 [i_0]))) : 379593733))));
                    arr_11 [5] [i_0] [5] = (((max((((!(arr_7 [i_0] [i_0] [i_2] [i_2])))), 379593742)) << ((((((~(arr_4 [i_0]))) + 63313)) - 22))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_11 = (min(var_11, ((min((((!(arr_4 [i_0])))), ((-((var_0 ? var_5 : var_9)))))))));
                                var_12 = 379593742;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
