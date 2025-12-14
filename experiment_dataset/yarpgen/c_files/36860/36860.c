/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_0] [12] |= (-2147483647 - 1);
                var_14 = -12232;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_15 = ((((((arr_11 [i_3] [i_3 - 2] [i_3 - 1] [11] [i_3 - 1] [14]) ? 62 : (arr_11 [i_3 + 4] [i_3 - 3] [i_3 + 2] [9] [i_3 - 3] [i_3])))) ? ((~(arr_11 [12] [i_3 + 3] [i_3 + 2] [i_3] [i_3 - 2] [i_3 + 1]))) : (((arr_11 [i_3] [i_3 + 2] [i_3 + 2] [i_3] [i_3 - 2] [12]) ? (arr_11 [i_3] [i_3 - 3] [i_3 + 4] [i_3 - 3] [i_3 - 1] [i_3 + 4]) : 1))));
                            arr_12 [i_3] [i_0] [i_1] [i_1] [i_0] [i_0] = ((((max(-1, (((-(arr_8 [i_0] [i_2]))))))) ? (((0 ? -204132311 : (arr_2 [i_0])))) : (--4122608995)));
                        }
                    }
                }
            }
        }
    }
    var_16 = (var_13 ? (max(-9972, ((var_12 ? 3968 : var_7)))) : var_7);
    var_17 = ((((-4 == (127 ^ var_9))) ? var_0 : var_4));

    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_18 = 204132309;
        arr_16 [i_4] = ((-(max(((13655121622602305110 ? 51339 : 3363780213)), ((max(238, 0)))))));

        /* vectorizable */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            arr_20 [i_4] [i_4] = arr_13 [i_4];
            arr_21 [i_4] [i_5] = (arr_19 [i_5] [i_4]);
            var_19 = ((-(arr_19 [i_5 - 1] [i_5 - 1])));
            var_20 = ((-4 ^ (((1 ? 14182 : 51339)))));
        }
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                {
                    var_21 = ((-((((-32760 ? 7013803537261779432 : 172358281)) ^ -16684784376590488586))));
                    arr_29 [i_6] [6] [i_8] [i_6] &= (((((-(arr_18 [i_8 - 1] [i_6])))) ? (((arr_18 [i_8] [i_7 - 2]) ? (-2147483647 - 1) : (arr_24 [i_6] [i_7 - 2] [i_8 - 1]))) : 32766));
                    var_22 = 30;
                    var_23 -= (max(4337811190274068162, (((((13655121622602305110 ? 13655121622602305102 : 4122609019)) == (arr_26 [i_7] [i_7 + 1] [i_8 - 1] [i_8 - 1]))))));
                }
            }
        }
        arr_30 [i_6] = 10715987818234976587;
        var_24 -= (arr_19 [i_6] [i_6]);
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        var_25 = ((182 ? (arr_31 [i_9]) : 4337811190274068158));
        var_26 &= ((15 ? 4294967295 : (arr_34 [i_9])));
    }
    #pragma endscop
}
