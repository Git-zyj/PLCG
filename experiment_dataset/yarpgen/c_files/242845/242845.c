/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!var_11);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (!1719083680)));
                var_14 = var_7;
                arr_7 [i_0] = (1 && 9);
            }
        }
    }
    var_15 |= var_9;

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_12 [i_2] = arr_9 [i_2];
        var_16 = (((0 ? (min(1, var_2)) : 1)));
        arr_13 [i_2] = (max(var_2, ((-(arr_11 [i_2] [i_2])))));
        var_17 += (min(((min(1, 197))), var_7));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            arr_19 [i_4] [i_4] [i_4] = (((2315700126 - 170) & var_8));
            arr_20 [i_3] [i_3] [i_3] = 1;
            arr_21 [i_3] [i_3] [i_3] = (((arr_16 [i_3]) < 167));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_24 [i_5] = ((-(arr_16 [i_5])));
            var_18 = var_1;
        }
        var_19 = (max(var_19, var_8));
    }
    #pragma endscop
}
