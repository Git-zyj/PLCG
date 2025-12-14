/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= ((-var_9 ? (((!(((var_1 ? var_8 : 1366307990)))))) : ((((max(var_12, 1735618037))) ? (!119) : ((max(var_8, var_11)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_14 ^= (((((var_2 ? 1 : var_3))) ? -1735618038 : ((-1735618037 ? 18446744073709551615 : -1735618037))));
        var_15 += (-11572 <= var_5);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_16 = ((1 ? var_8 : (2147483645 <= var_0)));
        arr_5 [i_1] [i_1] = ((-(11572 <= 10513)));
        var_17 = var_0;
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_18 = ((min((~var_10), (!var_5))) * (var_7 <= var_2));
        var_19 = var_8;
        var_20 = (((((1 ? var_8 : var_1))) ? ((max(1, 4294967281))) : var_8));

        /* vectorizable */
        for (int i_3 = 2; i_3 < 12;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                var_21 = (min(var_21, 32767));
                var_22 = (1 && 32767);
            }
            var_23 = -32750;
            var_24 = var_3;
        }
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            var_25 = (min((var_5 && 2147483647), (var_2 - var_6)));
            var_26 = var_10;
            arr_18 [i_5] [i_5] [i_5] = ((-(~var_4)));
            var_27 = max((max(2147483647, (~var_5))), var_8);
        }
    }
    var_28 = (max((((4769927664300842023 - -740968257) ? (min(var_7, var_11)) : (var_7 - -1047555999))), (((((min(-1735618037, var_11))) ? var_9 : (-259595892 <= 4769927664300842040))))));
    #pragma endscop
}
