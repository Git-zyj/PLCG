/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, 0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_18 = arr_6 [i_0] [i_1];

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_19 = (min(((-(arr_8 [i_1]))), (max((min((arr_8 [i_1]), (arr_2 [i_0] [i_0] [i_0]))), (36344 * 1851202396)))));
                        var_20 = (min(var_20, ((((15 + (arr_3 [i_1 - 1] [i_1 + 4] [i_1 + 3]))) >> (((arr_5 [i_0]) - 1504499488))))));
                        var_21 |= ((arr_3 [10] [i_1] [i_1]) ? ((((arr_3 [i_0] [i_0] [i_0]) + (arr_3 [i_0] [i_2] [i_3])))) : (arr_6 [i_0] [i_1 + 1]));
                        arr_9 [i_1] [3] [i_1] [i_1] [0] [i_1] = ((!(((18446744073709551601 ? 10 : (-9223372036854775807 - 1))))));
                    }
                }
            }
        }
    }
    var_22 = (var_12 < var_7);
    #pragma endscop
}
