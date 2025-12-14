/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] |= (arr_1 [i_0 - 1]);
        arr_3 [i_0] [i_0] = 7;
        var_19 += 61266;
        arr_4 [i_0] [18] = max((arr_1 [i_0]), (((-(arr_0 [i_0 - 4] [i_0 - 2])))));
        var_20 = (((!(~-2305843009213693952))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = ((-(max(((var_0 << (((arr_7 [i_1]) - 43924)))), (arr_7 [i_1])))));
        arr_10 [i_1] = 0;
        arr_11 [i_1] = var_5;
        var_21 -= (!2834993141);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    arr_18 [i_1] [i_2] [i_3] [i_2] = ((+(min((arr_17 [i_1] [i_1] [i_3] [i_3]), (arr_6 [i_1])))));
                    var_22 = (max(7, 8));
                    var_23 |= (arr_5 [6]);
                    var_24 *= ((((max(var_17, var_11))) / (arr_7 [i_1])));
                    arr_19 [i_2] [i_2] [i_3] [i_2] = ((~(min(1, (arr_13 [i_1])))));
                }
            }
        }
    }
    var_25 = ((var_17 || (((99 ^ (!var_7))))));
    #pragma endscop
}
