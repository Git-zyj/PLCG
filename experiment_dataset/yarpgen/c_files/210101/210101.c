/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_17 = 16148777917491187393;
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_1] [i_1] [i_3] = ((((((arr_0 [i_2 - 1]) * var_2))) ? ((min((((var_11 > (arr_6 [i_0] [i_2] [i_2 - 1] [i_3])))), 5))) : (((!(arr_2 [i_3]))))));
                        arr_10 [i_1] [i_1] [i_1] [i_3] = (min(1, (min(1274338861, (arr_1 [i_2 - 1])))));
                    }
                }
            }
            var_18 -= (((~(min(2166230006, 15)))));

            /* vectorizable */
            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                arr_13 [i_1] [i_1] [i_1] = var_4;
                var_19 = (min(var_19, ((((((-(arr_5 [i_0] [i_1] [1] [i_1])))) ? (arr_8 [i_4] [i_4 + 1] [i_4] [i_4 + 1]) : var_16)))));
                var_20 = -1;
                var_21 -= 65518;
                arr_14 [i_1] [i_1] [i_1] = ((~((1 ? var_5 : (arr_5 [i_0] [i_0] [i_1] [i_0])))));
            }

            /* vectorizable */
            for (int i_5 = 4; i_5 < 14;i_5 += 1)
            {
                var_22 = (((arr_5 [i_5] [i_5 + 1] [i_1] [i_5 - 2]) != (arr_18 [i_5 - 3] [i_5] [i_5 - 2] [i_5 - 4])));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 14;i_7 += 1)
                    {
                        {
                            var_23 = (min(var_23, ((((arr_2 [4]) ? (~0) : (arr_8 [i_6 + 1] [i_6] [i_5 - 2] [i_0]))))));
                            arr_24 [i_5] [i_1] [1] [i_1] [i_7] = ((-1508507600 ? (arr_12 [i_5 - 1] [i_5 - 1] [i_6 + 2]) : (1 / 7079697164166915455)));
                            arr_25 [i_1] [i_6] [9] [i_5 - 4] [i_1] [i_1] = (var_5 & 5846868177117739944);
                        }
                    }
                }
                var_24 = -15;
                arr_26 [i_1] [i_1] [i_1] [i_0] = ((!(arr_15 [i_0] [i_5 - 4] [i_1] [i_5])));
            }
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                var_25 |= -1157754015;
                arr_29 [i_0] [i_1] [2] = (((~2297966156218364215) + ((((~8810398661992743626) * (29 || var_5))))));
                arr_30 [i_1] = ((((((arr_11 [i_8] [i_8] [i_8]) | 7078637682590285560))) ? ((min(1, (arr_11 [i_8] [i_8] [i_8])))) : (35 <= 48)));
            }
        }
        arr_31 [i_0] = ((!((((((var_16 ? 1 : 0))) ? ((((arr_2 [i_0]) & 207))) : ((var_4 ? 2585513622395268174 : var_10)))))));
        arr_32 [i_0] = (((5 == var_4) ? (arr_2 [9]) : ((min(1, (arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                {
                    var_26 = (max(var_26, ((max((arr_7 [i_0] [i_9] [i_10] [i_10]), ((((-(arr_8 [12] [i_0] [i_9] [i_10]))))))))));
                    arr_37 [i_0] [i_9] [i_10] [i_9] = ((4035225266123964416 ? (!-19667) : (arr_2 [i_10])));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 16;i_11 += 1)
    {
        var_27 = ((1274338861 ? (arr_38 [i_11]) : (arr_38 [i_11])));
        var_28 = 86;
        var_29 = (arr_38 [i_11]);
        var_30 = ((1 * (arr_38 [i_11])));
        var_31 = var_14;
    }
    var_32 = min(((-5 == (~var_5))), var_0);
    var_33 = var_14;
    var_34 = (~var_8);
    var_35 = -var_2;
    #pragma endscop
}
