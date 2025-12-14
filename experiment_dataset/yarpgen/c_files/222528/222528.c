/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    var_12 = (min(var_7, (max((~-74), (18974 * var_7)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_13 = (min((arr_8 [14] [i_1] [i_1] [i_1]), ((min((arr_8 [i_0] [i_1] [i_2] [i_3]), (arr_8 [i_0] [i_0] [i_0] [i_2]))))));
                        arr_10 [8] [i_1] [i_1] [14] = (max((arr_8 [i_3] [7] [i_1] [i_0]), 1));
                        arr_11 [i_1] [i_1] [i_1] = ((1 == ((1 ^ (arr_2 [i_1] [i_1])))));
                        arr_12 [i_1] [i_1] [i_1] = (max(((34 ? ((min(-2897, (arr_1 [i_1])))) : 1)), (arr_8 [i_0] [i_2] [i_1] [i_0])));
                        var_14 = (((((arr_0 [i_0] [i_0]) ^ ((1 ? 59 : -2897)))) <= (((-127 - 1) | (arr_1 [i_0])))));
                    }
                }
            }
        }
        arr_13 [i_0] = ((max((11463597918173972168 | -68), (~140737488355320))) | (~0));
    }
    for (int i_4 = 1; i_4 < 20;i_4 += 1)
    {
        arr_17 [i_4] = (((((-(arr_15 [i_4] [i_4 - 1])))) / (((arr_15 [i_4] [i_4 - 1]) ? 3336948429 : (arr_15 [i_4] [i_4 + 1])))));
        arr_18 [10] &= (((~(arr_16 [i_4 - 1] [16]))));
    }
    var_15 = (17306923138107321672 <= var_2);
    var_16 += var_3;
    #pragma endscop
}
