/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [19] [i_0] = (max((max(var_1, var_5)), -106));
        var_11 = (min(var_11, ((min(-32759, (min(((32767 ? -32753 : 27887)), 1)))))));
        var_12 = (max(((min(var_9, 1))), (max(2603574388, var_4))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 4; i_2 < 20;i_2 += 1)
        {
            var_13 ^= var_0;
            arr_11 [i_1] = (((var_1 + 9223372036854775807) << (var_0 - 872045729)));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_15 [i_1] [i_1] = ((var_2 | ((4880868438792023556 ? var_5 : var_3))));
            var_14 = ((var_9 ? (var_3 || 1) : ((-120 ? 1 : 1))));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_19 [i_1] [i_1] = var_3;
            var_15 = (var_1 | var_10);
            var_16 = (max(var_16, (((1 ? (224 != var_8) : ((var_3 ? 1 : var_5)))))));
            arr_20 [i_1] [1] = ((15 ? var_2 : -4880868438792023562));
        }
        arr_21 [i_1] = var_10;
        var_17 |= ((150 ? 32767 : -7));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        arr_24 [i_5] = ((1 ? var_10 : ((var_7 ? var_10 : var_6))));
        arr_25 [12] = var_1;
    }
    var_18 = (min((max(4880868438792023562, 1)), ((max(var_0, var_3)))));

    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_19 ^= ((var_0 ? var_2 : var_8));
        var_20 = ((1691392908 ? 18864 : -4726653530149553210));
        var_21 = ((var_2 ? var_10 : -2528818128572795710));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        var_22 ^= ((61627 ? var_2 : var_3));
        arr_33 [1] = var_2;
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        arr_42 [i_7] [i_8] [15] [13] = ((((var_2 ? var_0 : var_8)) > (57387 >= 1)));
                        var_23 = var_0;
                        var_24 = (min(var_24, ((((((var_9 ? 6 : 7431018536615045845))) ? ((var_3 ? 1 : 17071129570171029381)) : var_6)))));
                    }
                }
            }
        }
    }
    var_25 = (251 < 1);
    #pragma endscop
}
