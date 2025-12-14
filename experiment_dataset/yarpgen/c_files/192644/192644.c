/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((45 ? (-1 ^ var_13) : var_0));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 = var_10;
        var_16 = (3368970486 ? ((((arr_0 [i_0] [i_0]) < (arr_0 [i_0] [i_0])))) : (max((arr_1 [i_0]), (arr_1 [i_0]))));
        var_17 = ((-(((8326487177657901264 ^ (arr_1 [21]))))));
    }
    for (int i_1 = 2; i_1 < 24;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_18 = ((((-(arr_4 [i_1] [i_1 - 1]))) >> (90 - 89)));
            arr_7 [i_1] [i_2] = (max((arr_4 [i_1 + 1] [i_1]), ((((max(51690, 1)))))));
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
        {
            arr_11 [i_1 - 1] [i_1 - 1] = ((-(arr_5 [i_1 + 1] [i_1 - 2] [i_1 - 2])));
            arr_12 [i_1] [i_1] [i_1] = (((((arr_8 [i_1 + 1] [i_3] [i_3]) ? var_9 : (arr_2 [i_1 + 1] [i_1]))) >= ((((arr_2 [i_1 + 1] [i_1]) + 0)))));
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
        {
            var_19 = ((-(max((max(var_10, 0)), ((((arr_10 [i_1] [i_1 - 2] [i_1]) ? 1 : (arr_9 [i_1]))))))));
            var_20 ^= (((arr_15 [i_1 + 1] [i_4]) ^ (!0)));
            var_21 = (min((-2147483647 - 1), (arr_2 [i_1] [i_4])));
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
        {
            var_22 -= ((55556 | ((min((((arr_13 [i_5] [i_5] [i_1]) || 9980)), ((!(arr_13 [i_5] [i_5] [i_1]))))))));
            arr_18 [1] [i_5] = ((((((arr_5 [i_1 + 1] [i_1] [i_5]) ? (arr_15 [i_1 - 2] [i_1 - 1]) : (arr_15 [i_1 + 1] [i_1 - 1])))) ? (((arr_5 [i_1] [i_1] [i_1]) % (((7331230277264829870 ? -1927128075 : -3590124294295841345))))) : ((-(((arr_17 [i_1] [i_1]) ? 16320 : (arr_5 [i_1] [i_1] [i_1 - 1])))))));
            var_23 = ((!(!13845)));
            var_24 = ((((arr_5 [16] [i_1 + 1] [i_1]) ^ (arr_5 [i_1 - 2] [i_1 - 1] [i_1]))) - (arr_9 [i_1]));
        }
        arr_19 [i_1] = (arr_14 [i_1]);
        arr_20 [i_1] [i_1] = ((3590124294295841344 - (((min((arr_16 [i_1 + 1] [i_1 + 1]), (arr_16 [i_1 + 1] [i_1 + 1])))))));
        var_25 = (max(var_25, (((-0 ^ (arr_9 [i_1 + 1]))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                {
                    var_26 ^= (((arr_27 [i_1] [i_1 - 2] [i_1 - 2] [i_7]) << (arr_6 [i_1 - 2] [i_1 + 1] [i_1 - 2])));
                    arr_29 [i_1] [i_6] [i_6] [i_6] = ((((max((arr_26 [i_1 - 2] [12] [i_1 - 2] [i_7]), (((arr_13 [i_1] [i_6] [i_7]) ? 1 : 2835098863747136574))))) ? (arr_4 [i_1] [i_1 + 1]) : (max((3590124294295841368 ^ 0), 8599691160342497658))));

                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        var_27 = 6752826686840467497;

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            var_28 -= (16320 || 4294967295);
                            var_29 = (((!(arr_9 [4]))) && ((((arr_13 [i_1] [i_1] [i_9]) ? 7277 : (arr_31 [i_9] [i_7] [i_1])))));
                        }
                        arr_34 [i_8] [i_7] [i_6] [i_1] = 3590124294295841344;
                    }
                }
            }
        }
    }
    var_30 = -var_4;
    #pragma endscop
}
