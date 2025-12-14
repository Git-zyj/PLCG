/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~-var_6);
    var_14 = (max(var_14, 1117));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_15 = 4294967295;
        var_16 = (min(var_16, ((((((((-(arr_1 [i_0])))) ? (arr_0 [i_0 + 1]) : (max(4294967295, (arr_0 [i_0]))))) >> (((-4294967295 ^ -1855891071) - 2439076215)))))));
        var_17 = 64418;
        var_18 -= (min(((((max((arr_0 [i_0]), (arr_1 [i_0])))) - ((4294967288 ? -1 : (arr_1 [i_0]))))), (14 == 1115)));
        var_19 = (max(var_19, (arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_4 [i_1] = 1359703951312366773;
        arr_5 [i_1] = 64421;
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 19;i_4 += 1)
            {
                {
                    var_20 = (max(var_20, var_12));
                    arr_13 [i_2] [3] [3] [i_2] = ((-(arr_8 [i_4 + 2] [i_4 + 2] [i_2 + 1])));
                    arr_14 [i_2] [i_2 - 1] = (((arr_9 [i_3]) ^ (((((arr_12 [i_2] [i_3] [i_4 + 1] [i_2]) < (arr_12 [i_2] [i_3] [i_4 + 1] [i_3])))))));
                    var_21 = (min(var_21, ((((-26 * 4294967295) ? (((17087040122397184843 ? (arr_8 [i_2] [8] [8]) : 4294967293))) : 1838925631928941880)))));
                    var_22 = (((arr_10 [5] [i_4 - 1] [i_2 - 1]) * (arr_6 [i_4 + 2])));
                }
            }
        }

        for (int i_5 = 3; i_5 < 19;i_5 += 1)
        {
            var_23 = (arr_15 [i_5 - 3] [i_5 - 1] [i_5]);
            var_24 = (((((78167048 ? var_1 : var_12))) ? 9223372036854775807 : (arr_9 [i_2 + 1])));
            arr_18 [i_2] [i_2] [i_2] = 17087040122397184821;

            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                var_25 &= (((arr_12 [i_2] [i_6] [i_6] [i_5 - 2]) + (arr_12 [12] [i_5 - 2] [7] [i_5 - 1])));
                var_26 |= ((288185346 | ((((arr_11 [i_5]) != -6190)))));
            }
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                arr_23 [i_2 + 1] = ((-2 ? 5 : 3547956175));

                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    var_27 = ((~(-2147483647 - 1)));

                    for (int i_9 = 1; i_9 < 19;i_9 += 1) /* same iter space */
                    {
                        var_28 -= (((arr_29 [i_9] [i_9 - 1] [i_9 + 2] [i_9 + 2] [i_9] [i_9 - 1] [i_9 - 1]) ? (arr_29 [i_9] [i_9] [i_9 + 1] [2] [i_9] [i_9 - 1] [i_9 + 1]) : (arr_29 [10] [i_9] [i_9 + 1] [i_9] [i_9] [i_9 + 1] [i_9])));
                        var_29 = (arr_6 [i_2 - 1]);
                    }
                    for (int i_10 = 1; i_10 < 19;i_10 += 1) /* same iter space */
                    {
                        arr_33 [18] [9] [i_5] [i_7] [9] [i_10] = (arr_16 [i_2 - 1] [i_2 - 1]);
                        var_30 = (arr_9 [i_7]);
                    }
                }
            }
            arr_34 [i_5] [i_5] [i_5 - 2] = 1359703951312366773;
        }
        arr_35 [i_2] [15] = (((-6679944053475681847 ? 4294967293 : (arr_10 [i_2 + 1] [i_2 + 1] [i_2 + 1]))));
        var_31 = ((arr_7 [i_2] [i_2 - 1]) * (arr_7 [i_2] [i_2 + 1]));
    }
    var_32 = var_8;
    #pragma endscop
}
