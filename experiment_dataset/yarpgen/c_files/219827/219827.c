/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_3 << ((((41351 ? -27531 : -27531)) + 27545))));
    var_17 = var_7;

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_18 = (max(var_18, (~41339)));
        arr_2 [i_0] = var_14;
        var_19 = (min(-21, (min((max(17179869168, var_9)), (arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 3; i_2 < 16;i_2 += 1)
        {
            var_20 = ((140 << (24196 - 24181)));
            var_21 = -21243;
            var_22 = (min(var_22, ((min(((31308 + (arr_6 [4] [i_2 - 2] [4]))), (((((var_13 ? 1551846058 : (arr_3 [2])))) ? var_15 : 176)))))));
            var_23 = (((~34199) != ((((arr_5 [i_2 - 2] [i_2]) >= 217)))));
        }
        var_24 ^= 34228;
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    var_25 -= (((var_2 == 212) * ((~(var_1 - 14586)))));
                    var_26 -= (50929 * ((1291232698887388280 ? 4203290020 : 1)));
                    arr_15 [i_5] [i_3] [i_5] [i_3] = ((4242339663 ? (((arr_5 [i_3] [i_4]) & (arr_5 [i_3] [i_4]))) : (((arr_5 [i_3] [i_3]) ? var_2 : (arr_5 [i_4] [i_4])))));
                    var_27 = var_15;
                    var_28 = ((((arr_6 [i_5] [i_4] [i_5]) ? (arr_1 [i_5] [i_5]) : (arr_8 [i_4] [i_5]))));
                }
            }
        }
        var_29 = (((~(arr_10 [i_3] [i_3] [i_3]))));
        var_30 = (arr_10 [i_3] [i_3] [i_3]);

        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            var_31 = var_3;
            var_32 = (((((~18446744056529682437) + 2147483647)) << (((((arr_14 [i_3] [i_3]) | (max(0, var_14)))) - 5187638963822984703))));
        }
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            var_33 ^= ((((((arr_6 [i_7] [i_3] [i_3]) - var_11))) ? (arr_6 [i_7] [i_7] [i_7]) : var_13));
            var_34 += ((var_3 ? var_5 : ((+(((var_0 + 2147483647) << (var_6 - 4870)))))));
            var_35 = (min(var_35, var_7));
        }
    }
    var_36 = 14607;
    #pragma endscop
}
