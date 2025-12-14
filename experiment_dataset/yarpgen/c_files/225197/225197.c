/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_0] = 1;
                arr_6 [i_0] [i_1] = (((arr_1 [i_1] [i_0]) ? var_2 : var_6));
                var_11 = (arr_4 [i_1] [i_1 - 3]);
                var_12 &= ((((((var_3 ? var_0 : (arr_0 [i_0])))) ? (arr_1 [i_0] [i_1 + 3]) : (arr_3 [i_1]))));
            }
        }
    }
    var_13 = var_7;
    var_14 = min((var_8 <= var_1), var_8);
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_15 |= min((arr_4 [1] [1]), ((!(arr_7 [i_4]))));

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_16 = (min((arr_13 [i_4] [i_3]), (min((arr_4 [i_5] [i_5]), (min(var_0, (arr_15 [i_2] [i_4] [i_5])))))));
                        var_17 = (min(var_17, (((0 + (((arr_15 [i_2] [i_3] [14]) ? (arr_15 [i_2] [i_3] [1]) : var_7)))))));
                    }
                    var_18 |= -2305843009213693952;
                }
            }
        }
    }
    #pragma endscop
}
