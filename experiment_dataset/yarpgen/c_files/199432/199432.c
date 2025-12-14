/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (2 - 5);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 19;i_1 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                arr_6 [i_1] = (((var_12 ^ 65531) > 57587));
                var_18 ^= (((~21206) ? (((((arr_2 [i_2]) < var_6)))) : ((252 ? 1 : -8204202823660599666))));
                arr_7 [i_1] = (((-3682014622369911781 % (arr_3 [i_1]))));
                arr_8 [i_1] [i_1 + 2] [i_2] [i_2] = var_11;
                var_19 = 65531;
            }
            arr_9 [i_1] [i_1] = (max((((var_10 >= var_9) ? ((((arr_1 [i_0]) ? var_8 : 84))) : (((arr_5 [i_0] [i_0] [i_1]) - (arr_0 [i_0] [i_1]))))), (!var_2)));
            arr_10 [i_1] = (arr_5 [i_0] [i_1 - 1] [i_1]);
            var_20 = ((1 ^ (-9223372036854775807 - 1)));
            var_21 = -117;
        }
        for (int i_3 = 1; i_3 < 19;i_3 += 1) /* same iter space */
        {
            arr_13 [i_0] [i_0] [i_3] = (((((((-3460675423581512116 ? var_2 : 33))) / var_8)) * (min(0, -126))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    {
                        var_22 = 0;
                        arr_22 [i_4] [i_3 + 2] [i_4] [i_3] = ((~(var_2 != 1)));
                        var_23 *= ((((min((((2900224898 ? (arr_17 [i_0] [i_5] [i_5] [i_5]) : var_10))), ((~(arr_3 [i_4])))))) || (arr_14 [i_5] [i_0] [i_4])));
                    }
                }
            }
            var_24 = ((-8702 ? ((((arr_12 [i_3 + 2] [i_3] [i_3]) <= (arr_12 [i_3 + 2] [i_3 + 2] [i_3])))) : ((((max((arr_20 [i_3] [i_3] [i_0] [i_3]), (arr_17 [i_0] [i_3] [i_3 + 1] [i_3 + 1]))) != ((((!(arr_15 [i_3] [i_0] [i_0] [i_3]))))))))));
        }
        var_25 = (arr_15 [i_0] [i_0] [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_6 = 3; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    {
                        var_26 = (65524 >= 5);
                        var_27 = (max((-1869118613971247610 / 69), (arr_16 [i_8])));
                    }
                }
            }
        }
        var_28 = (((arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) & ((32767 ? (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : 1337))));
    }
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        var_29 = ((((25 ? (21 > 65260) : (min(166, var_13)))) == ((min(((66 ? 8680 : 4)), (var_6 > var_9))))));
        arr_32 [i_9] = (((17933690466737017511 ? -68 : -95)));
    }
    #pragma endscop
}
