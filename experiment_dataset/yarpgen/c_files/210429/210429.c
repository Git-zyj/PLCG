/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                var_18 = (arr_5 [i_0] [i_0] [i_2]);
                arr_8 [i_0] = (max((((((arr_6 [i_0] [i_2]) + (arr_4 [i_0]))) | (((max(var_12, var_12)))))), -703812082));
                var_19 -= (~var_12);
                arr_9 [i_0] [i_2] = (min(-20096, var_7));
                arr_10 [i_0] = (arr_4 [i_0]);
            }
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                arr_14 [i_0] = ((var_12 ? ((16756 ? 8 : 4447339731460419267)) : ((min((~var_6), (~var_5))))));
                arr_15 [i_0] [i_1] [i_0] = (i_0 % 2 == 0) ? ((((((arr_11 [i_1] [i_3]) && (((var_4 >> (((arr_4 [i_0]) - 1813422252))))))) ? ((((!var_9) && var_8))) : (((!(-3231393626391049117 - var_13))))))) : ((((((arr_11 [i_1] [i_3]) && (((var_4 >> (((((arr_4 [i_0]) - 1813422252)) - 589917310))))))) ? ((((!var_9) && var_8))) : (((!(-3231393626391049117 - var_13)))))));
                var_20 -= (max(((var_4 ^ (arr_0 [i_0]))), var_5));
                arr_16 [i_0] [i_0] = (arr_1 [i_0]);
            }
            for (int i_4 = 1; i_4 < 8;i_4 += 1)
            {
                var_21 = max((arr_3 [i_4 - 1] [i_0] [i_4]), ((1 ? -31532 : (arr_19 [i_4 + 2] [i_0] [i_4 + 2] [i_4 - 1]))));
                var_22 = (max(-10934, 1));
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    {
                        var_23 = (max(((min(25018, (arr_21 [i_6] [i_5] [i_0] [i_0])))), (min(((-7736288068420547971 ? var_3 : var_15)), (~4447339731460419267)))));
                        var_24 += var_14;
                    }
                }
            }
            arr_26 [i_0] = ((((151 << (-1851313897 + 1851313898))) << (var_0 - 41)));
            arr_27 [i_0] = ((~(max((((1 ? 35 : var_8))), ((var_4 ? -6815427708236245794 : (arr_1 [i_0])))))));
        }
        arr_28 [i_0] = ((((((((-32767 - 1) + 2147483647)) >> (-27478 + 27499)))) ^ (min((arr_13 [i_0] [8]), var_15))));
    }
    var_25 = (var_16 > var_6);
    /* LoopNest 3 */
    for (int i_7 = 2; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 15;i_9 += 1)
            {
                {
                    arr_37 [i_7] [i_8] &= ((arr_36 [i_7 - 2]) << ((((((-(arr_36 [i_7 + 1]))) + 1421758477709619780)) - 17)));
                    var_26 |= (-1 + 1);
                }
            }
        }
    }
    #pragma endscop
}
