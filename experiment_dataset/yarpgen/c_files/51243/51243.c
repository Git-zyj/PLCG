/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_2 - ((var_6 ? var_2 : var_14)))) % (var_9 * var_16));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_19 = ((((((arr_2 [i_0] [5]) + var_17))) ? (--5190798095414088329) : ((var_12 ? -5190798095414088329 : ((var_5 - (arr_1 [i_1])))))));
            var_20 -= ((+((max((arr_1 [7]), var_16)))));
        }
        for (int i_2 = 1; i_2 < 8;i_2 += 1)
        {
            arr_8 [i_0] [i_0] = 1491774101;
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 7;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_21 = (min(var_21, var_16));
                            var_22 = (((arr_2 [i_0] [i_0]) | ((~(arr_7 [i_0] [i_0] [i_5])))));
                            var_23 = ((var_15 * (((arr_3 [i_0] [3] [i_0]) * (arr_9 [i_2 + 1] [i_2] [i_2 + 1])))));
                        }
                    }
                }
            }
            arr_16 [i_0] = var_16;
        }
        var_24 = (max(var_24, var_16));
    }
    #pragma endscop
}
