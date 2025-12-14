/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((((1291367958 ? 193 : 11218))), 1291367958));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_12 = (min(var_12, (max((min(3003599312, 14332)), var_9))));
        arr_2 [i_0] [7] = ((((max(1196758635, (arr_1 [i_0] [6])))) < ((-14342 ? -14355 : 25782))));

        /* vectorizable */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            arr_5 [i_0] = 49691;
            var_13 ^= -0;
            arr_6 [i_0] = arr_1 [i_0] [i_0];
        }
        arr_7 [12] = ((((((~(arr_1 [i_0] [i_0]))) + 2147483647)) >> ((((18446744073709551611 ? 3925947975 : 173)) - 3925947965))));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = ((((max(-1, 1916652591))) ? (((arr_10 [i_2] [i_2]) ? -14356 : var_4)) : 38283));
        arr_12 [i_2] = (~1407987163403373390);

        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        var_14 = (max(var_14, (arr_9 [i_3 + 1])));
                        arr_20 [i_4] [i_4] [i_4] [i_2] [i_4] = ((-14342 ? (arr_8 [i_2]) : (((183 ? 18203073701863943093 : 119793563)))));
                        var_15 = (min(var_15, ((max((13081 > 18446744073709551615), (arr_10 [i_2] [i_5]))))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    {
                        arr_26 [i_2] [21] [i_2] [i_2] = ((!((max(3003599320, (arr_21 [i_6 - 2] [i_3 - 2]))))));
                        arr_27 [i_2] [i_2] [i_3] [i_2] = max(((-(arr_17 [i_3 + 1] [i_3 + 1] [i_6 - 1]))), (min(1675930490, (arr_17 [1] [i_3 - 2] [i_3]))));
                        arr_28 [i_2] = (((arr_16 [i_3 - 1] [i_3]) >= (((~51345) ? (arr_18 [i_2] [i_6 + 3] [1] [i_2]) : ((max(var_7, 4179938155)))))));
                        var_16 = (min(var_16, (4294967277 > 21)));
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
        {
            var_17 = (((((38293 || 2598453043125916676) > (arr_8 [i_2]))) ? ((((0 >= 0) * ((4008177009 ? var_0 : 196))))) : (((((arr_8 [i_2]) >= 243670371845608506)) ? (((0 ? var_1 : var_4))) : (18203073701863943116 >> 6)))));
            arr_31 [14] |= var_3;
            var_18 = (((((~(arr_19 [i_8] [i_8] [i_8] [i_2] [i_2] [i_2])))) * (max((((1291367965 ? 255 : 1))), 1682372504))));
            var_19 &= (!var_2);
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
        {
            arr_34 [i_2] [22] [i_2] = (max((((!(arr_24 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))), ((2627568393 ? 3984212985 : (!1)))));
            var_20 = max((11316 || 1682372497), 66846720);
        }
    }
    var_21 = max(((var_0 ? var_0 : var_6)), var_7);

    /* vectorizable */
    for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
    {
        var_22 *= 3003599314;
        arr_39 [i_10] = var_1;
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
    {
        arr_42 [i_11] = (((arr_37 [i_11]) ? 2612594798 : (arr_37 [i_11])));
        var_23 = ((-(arr_41 [i_11])));
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        var_24 = (max(var_24, ((min((max((arr_18 [1] [i_12] [i_12] [1]), (arr_18 [i_12] [i_12] [i_12] [8]))), (arr_18 [i_12] [i_12] [i_12] [4]))))));
        arr_45 [i_12] [i_12] = 2612594780;
    }
    for (int i_13 = 0; i_13 < 22;i_13 += 1)
    {
        arr_48 [2] &= (arr_16 [i_13] [i_13]);
        var_25 = (min(var_25, (((-((-68 ? -1267897686576185600 : 2771322230864574659)))))));
    }
    var_26 += var_4;
    #pragma endscop
}
