/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= ((~(max(1, ((23428 ? var_4 : 4))))));
    var_12 = (var_5 * (((var_8 ? var_10 : var_0))));
    var_13 = 1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_2] [1] [i_2] [i_1] = (23 ^ var_6);
                    var_14 -= (((arr_0 [i_0] [i_1]) ? (arr_0 [i_1] [12]) : -23441));
                }
            }
        }
        var_15 = (max(var_15, (((66 ? var_2 : 1742482089048899625)))));
    }
    for (int i_3 = 2; i_3 < 22;i_3 += 1)
    {
        var_16 = ((((((arr_7 [5] [i_3 - 2] [i_3 - 2] [i_3 - 2]) ? ((-(arr_2 [i_3] [i_3]))) : var_7))) ? 1 : (min((((arr_7 [i_3] [i_3] [i_3 - 1] [10]) ? 3291931645 : 246)), (min(var_8, var_5))))));
        var_17 = ((~(arr_3 [i_3 + 1] [i_3 - 1])));
        var_18 = 1;
        arr_14 [i_3] [i_3] = (max(((-1386413238 ? (arr_1 [i_3 - 2]) : var_3)), ((max(23440, (arr_1 [i_3 + 2]))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 24;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_19 = (max((((arr_1 [i_3 - 1]) ? var_10 : 37)), (((arr_22 [i_3] [20] [i_3 + 2] [20]) ? var_10 : (((!(arr_6 [i_6] [5] [i_3]))))))));
                        var_20 = -8;
                    }
                    var_21 = 253;
                    arr_23 [23] [23] [i_4] [23] = (-10317 < 49152);
                }
            }
        }
    }
    #pragma endscop
}
