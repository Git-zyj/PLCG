/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_14));
    var_20 &= ((7 << ((65531 ? ((min(65524, 0))) : -27))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_21 = ((var_11 ? 1 : 44320));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    {
                        var_22 = (min(var_22, ((((65528 ? 1220587635 : (-9223372036854775807 - 1)))))));
                        arr_10 [i_0] [i_2] [i_0] [i_0] |= ((44320 ? -101 : 44320));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        arr_19 [i_6] [i_5 + 1] [5] [i_0 - 2] [i_0 - 2] = ((3253 ? ((0 ? -90 : 16235244)) : var_16));
                        arr_20 [i_0] [i_4 + 1] [i_5] [i_6] = 44327;
                    }
                }
            }
        }
        arr_21 [i_0] [i_0 - 3] = 18137765598280703545;
    }
    for (int i_7 = 4; i_7 < 9;i_7 += 1) /* same iter space */
    {
        arr_25 [i_7 - 3] = (((max(var_4, ((31 ? 9486573417262785733 : 14669990609015517621)))) - ((11 ? 10948338920922391487 : (arr_0 [i_7 + 1] [i_7 + 1])))));
        arr_26 [i_7 - 2] = (((((3787569943 ? (min((arr_23 [i_7]), 1)) : (max(8, (arr_13 [i_7] [i_7])))))) ? ((((((min(var_18, -1586443114)) + 2147483647)) << ((((65535 ? 8552745807420196906 : -186928941)) - 8552745807420196906))))) : (((100 % 85) ? 30 : (min(var_12, var_9))))));
        var_23 = (((((-(arr_8 [i_7 - 4] [i_7 + 1] [i_7 + 1] [i_7 - 4] [i_7 - 4] [i_7 + 2])))) - (min(44335, (arr_5 [i_7] [i_7 - 2] [i_7 - 3])))));
    }
    for (int i_8 = 4; i_8 < 9;i_8 += 1) /* same iter space */
    {
        arr_30 [i_8 - 1] [11] = (121 | 44347);
        var_24 += (((107 ? (((!(arr_14 [i_8] [i_8] [i_8]))) : (0 || 85)))));
        var_25 ^= (min(2909963287929732078, var_12));
    }
    for (int i_9 = 4; i_9 < 9;i_9 += 1) /* same iter space */
    {
        arr_34 [6] [5] = (min((max((17253283548202925813 - 17), 8960170656446765886)), (arr_23 [i_9 + 3])));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 11;i_11 += 1)
            {
                {
                    var_26 = ((((max(((var_5 ? var_6 : 44337)), 44318))) ? ((((var_9 ? 6340425327619611721 : 8960170656446765895)) - ((max((arr_38 [i_9 + 1] [i_9 + 1]), 92))))) : ((8 ? ((8960170656446765905 ? var_2 : 44329)) : (((0 ? var_6 : var_6)))))));
                    var_27 = 44338;
                }
            }
        }
        arr_40 [i_9] [i_9] = (((-(max(102, 2091192895550668087)))));
        var_28 = (4613721527201305734 == 9486573417262785733);
    }
    #pragma endscop
}
