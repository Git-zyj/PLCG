/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    var_14 = var_10;
    var_15 = -502552699;
    var_16 = var_2;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 = var_4;

        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            var_18 = (max((((3 >> (956554976 - 956554970)))), (var_11 - var_2)));
            var_19 = ((~(3 * 3)));
        }
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            arr_8 [i_2] [1] [i_0] |= 1;
            arr_9 [i_2] [i_2] = ((-1 ? (~11727208277646784076) : var_2));
            var_20 += (((var_2 <= var_8) - var_1));
            arr_10 [i_0] [i_0] = (((-956554972 - -956554975) ? (((~1265332185) ? var_1 : -1)) : ((var_12 / ((8985121868199866446 ? var_9 : var_5))))));
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        {
                            arr_24 [i_5] = (var_12 - ((7201926594085813782 ? var_5 : var_8)));
                            var_21 = (((~((16 ? 1862494325 : 536870911)))));
                            var_22 = 1;
                            arr_25 [i_0] [i_5] [i_4] [i_5] [i_0] = (12 && 1);
                        }
                    }
                }
            }
            arr_26 [i_3] = (~-16);

            /* vectorizable */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                arr_29 [i_0] [i_0] [i_7] [6] &= ((4294967291 ? var_4 : 956554991));
                var_23 = ((~(-2147483647 - 1)));
                arr_30 [i_0] [i_0] [i_7] [i_0] = (var_1 && var_4);
            }
            var_24 = (max(var_24, 8329));
        }
        arr_31 [i_0] = (!-71);
    }
    #pragma endscop
}
