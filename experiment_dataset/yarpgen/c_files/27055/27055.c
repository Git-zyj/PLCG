/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (min((((1885006856 ? -1885006878 : 65525))), var_1));
    var_12 ^= var_5;
    var_13 = var_3;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] = ((~(arr_0 [i_0 - 2] [i_0 - 2])));
                    arr_10 [i_0] [i_0 - 2] [12] [i_2] = ((var_9 ? ((var_8 ? (arr_1 [i_0]) : var_6)) : (arr_7 [5])));
                }
            }
        }
        arr_11 [i_0] [10] = (arr_8 [i_0] [i_0] [i_0]);
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_15 [i_3] [i_3] = var_8;
        arr_16 [i_3] = ((((min(53218, (arr_13 [i_3])))) ? (((arr_13 [i_3]) ? var_2 : (arr_13 [i_3]))) : (arr_13 [i_3])));
        var_14 += 134;
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_15 = (min(var_15, (((((((1885006856 ? var_10 : var_1)))) ? var_7 : (((((var_6 ? 18446744073709551615 : var_9))) ? ((max(var_4, 1885006878))) : (arr_7 [i_4]))))))));
        arr_19 [i_4] = var_4;
        var_16 = (max(var_16, var_8));
        arr_20 [i_4] [i_4] = (((((3332972094526602689 ? 3332972094526602689 : 1885006877))) == (min(5866663960792680916, -1047795848))));
    }
    #pragma endscop
}
