/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 -= ((((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0]))));
        var_18 = 46225;
        var_19 -= (min(((var_7 ? (var_12 | 113575720) : (var_13 / 7238674144194362617))), ((max((~var_4), (arr_1 [i_0]))))));
        arr_4 [i_0] [i_0] = ((((((!(arr_0 [i_0]))))) / (min((min(6144, (arr_3 [3]))), 113575694))));
    }
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        var_20 = (max(var_20, (arr_3 [3])));
        var_21 = (arr_0 [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    arr_13 [i_1 + 2] [i_2] [i_3] = ((14415670988514581306 / ((14415670988514581297 / ((max(var_0, (arr_3 [i_1]))))))));
                    var_22 |= ((var_0 == (min(5244720311089878274, 74218959))));
                    arr_14 [i_1] [i_2] = var_11;
                    arr_15 [i_3] [i_3] [i_2] [i_2] = (((((min(var_15, (var_10 < -74218988))))) < 16158716702565621116));
                }
            }
        }
        arr_16 [i_1] = ((min(var_10, -4031073085194970309)));
        arr_17 [i_1 - 1] = (((((+(min((arr_1 [1]), (arr_5 [i_1 + 2])))))) >= var_12));
    }

    for (int i_4 = 3; i_4 < 21;i_4 += 1)
    {
        var_23 *= ((((var_6 ? (arr_18 [i_4 + 3]) : (arr_19 [i_4 + 2]))) % (((arr_19 [i_4 + 2]) ? (arr_18 [i_4 + 1]) : (arr_19 [i_4 - 3])))));
        var_24 = (((!(141 && 48437))));
    }
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        var_25 = (min((arr_2 [i_5]), (((((((arr_1 [i_5]) - var_11))) ? (((var_16 < (arr_3 [i_5])))) : var_2)))));
        var_26 = (min(((((arr_21 [i_5 + 2]) <= (max(107, 0))))), (max(-74218959, -74218961))));
        var_27 = (arr_20 [i_5] [i_5]);
        var_28 |= (((((max((arr_18 [i_5]), (arr_3 [4])))) ? (min((arr_0 [i_5]), 4031073085194970329)) : 14415670988514581306)));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 22;i_6 += 1) /* same iter space */
    {
        arr_26 [i_6] = 197;

        for (int i_7 = 4; i_7 < 21;i_7 += 1)
        {
            var_29 = (max(var_29, (arr_23 [i_6] [i_7])));
            var_30 &= (arr_22 [i_6] [i_7]);
        }
        var_31 = var_15;
    }
    for (int i_8 = 1; i_8 < 22;i_8 += 1) /* same iter space */
    {
        var_32 = (74218959 > 5547);
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 24;i_10 += 1)
            {
                {
                    var_33 ^= (max(var_10, (((arr_36 [i_10 - 1]) ? -32755 : (arr_36 [i_10 + 1])))));
                    var_34 -= (((((((((min(22325, 121)))) < var_9)))) <= (min(var_11, (arr_34 [i_8 + 2] [i_10 - 1])))));
                }
            }
        }
    }

    for (int i_11 = 0; i_11 < 17;i_11 += 1)
    {
        var_35 = (max((((~(max(74218942, var_13))))), (min((((3105688640746569903 ? 2778005337367018061 : (arr_21 [i_11])))), (arr_25 [i_11] [i_11])))));
        var_36 ^= ((~((var_3 * (arr_40 [i_11])))));
    }
    var_37 = var_5;
    #pragma endscop
}
