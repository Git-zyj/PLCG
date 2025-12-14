/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_5 [i_0] = (((1082155053 & 1082155055) + 41));
            arr_6 [i_0] [i_1] [i_0] = (arr_2 [i_0] [i_0] [i_0]);
        }
        var_10 = (((arr_0 [i_0]) <= (arr_4 [i_0] [i_0] [i_0])));

        for (int i_2 = 1; i_2 < 18;i_2 += 1) /* same iter space */
        {
            var_11 = (max(var_11, (arr_4 [i_0] [i_2 + 1] [i_2 + 1])));
            var_12 = (min(var_12, (((var_4 & (arr_1 [i_0] [i_2 + 1]))))));
        }
        for (int i_3 = 1; i_3 < 18;i_3 += 1) /* same iter space */
        {
            var_13 = (max(var_13, ((((arr_2 [17] [i_3 + 1] [i_3 + 1]) + (arr_2 [i_3 - 1] [i_3 - 1] [i_3 - 1]))))));
            arr_14 [i_3] = ((~(arr_8 [i_3 - 1] [7])));
            var_14 = (1082155044 == var_7);
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_15 = (~var_5);
            arr_18 [i_0] [i_4] = (arr_8 [i_0] [i_0]);
            var_16 = (arr_3 [i_0] [i_0] [i_4]);
            var_17 = (((arr_10 [i_4]) <= (arr_1 [i_0] [i_0])));
        }
        arr_19 [i_0] = (arr_10 [i_0]);
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    {
                        var_18 = (min((((((max(3212812241, 3212812214))) && (!var_8)))), (arr_0 [i_5])));
                        var_19 = ((!(((((min((arr_21 [i_5]), 3212812242))) ? (72 <= 1082155067) : (arr_0 [i_5]))))));
                    }
                }
            }
        }

        for (int i_9 = 3; i_9 < 9;i_9 += 1)
        {
            arr_34 [i_9] [i_5] [i_9] = var_4;
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 8;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        {
                            var_20 ^= (max((max((arr_28 [i_5] [i_5] [4]), var_2)), ((min((arr_23 [i_9] [i_9] [i_9]), (arr_28 [i_9] [i_9] [i_9]))))));
                            var_21 = ((!(arr_22 [i_5])));
                            arr_45 [i_5] [i_5] [i_5] [i_5] [2] [i_5] [i_5] = (arr_13 [i_11 - 2] [i_9 - 1] [i_9 - 1]);
                        }
                    }
                }
            }
        }
        for (int i_13 = 0; i_13 < 10;i_13 += 1)
        {
            /* LoopNest 3 */
            for (int i_14 = 2; i_14 < 7;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 9;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 8;i_16 += 1)
                    {
                        {
                            arr_57 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((~(~1082155053)));
                            var_22 = ((-(max(3212812242, (!3212812242)))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_17 = 3; i_17 < 9;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 10;i_18 += 1)
                {
                    {
                        var_23 = (min(var_23, (((max((max((arr_52 [2] [i_17 + 1] [i_13] [2]), 3212812214)), (var_9 + var_3)))))));
                        var_24 = (min(55, (min((((~(arr_44 [i_5] [i_13] [i_17 - 1] [i_5] [i_18] [i_5])))), (arr_4 [i_5] [i_13] [i_17])))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_19 = 4; i_19 < 8;i_19 += 1)
        {
            var_25 -= ((~(arr_13 [i_5] [i_5] [i_5])));
            arr_66 [i_5] [i_5] [9] = (7795 + 3212812234);
        }
    }
    for (int i_20 = 1; i_20 < 20;i_20 += 1) /* same iter space */
    {

        for (int i_21 = 0; i_21 < 24;i_21 += 1)
        {
            var_26 = (((-((var_6 + (arr_67 [i_20] [i_20]))))));
            arr_71 [i_20] [i_21] = ((!((((arr_70 [i_20 - 1] [i_20] [i_20 + 1]) ? var_6 : ((min(1082155040, 1082155090))))))));
        }
        arr_72 [i_20] = (((((max((arr_68 [i_20]), (arr_69 [i_20]))) << (((arr_67 [9] [i_20 + 1]) - 3224260433590818447)))) ^ (min((arr_68 [i_20 + 1]), (arr_68 [i_20 + 4])))));
    }
    for (int i_22 = 1; i_22 < 20;i_22 += 1) /* same iter space */
    {
        arr_75 [i_22] = ((min(((max(var_1, var_9))), (~-69))));
        var_27 = 1082155090;
    }
    var_28 = var_7;
    var_29 = 1082155103;
    #pragma endscop
}
