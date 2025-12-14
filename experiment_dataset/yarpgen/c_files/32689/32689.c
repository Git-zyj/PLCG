/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_17 -= ((((~(arr_0 [i_0 - 1]))) | ((~(arr_0 [i_0 - 3])))));
            arr_5 [i_0] [i_1] |= (((!1) >= (min((arr_2 [i_0] [i_0 - 1] [i_0 + 2]), (arr_4 [i_0])))));
            var_18 = ((-14 >= ((max((5 || -10), -14)))));

            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                arr_9 [i_1] [i_1] = (((arr_1 [i_0]) > 32));
                var_19 = (51 >= var_1);
                arr_10 [i_1] = 51;
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                arr_15 [0] [3] [i_1] [2] = var_10;
                var_20 = (((((95 - (arr_2 [i_1] [i_1] [i_1])))) ? (var_2 == -10) : (arr_12 [i_1])));
            }
            for (int i_4 = 1; i_4 < 7;i_4 += 1)
            {
                var_21 = (((min(1, 32755))));
                var_22 = (arr_1 [i_1]);
                arr_19 [i_1] [i_1] [2] [i_1] = (~91);
                arr_20 [i_1] = (((arr_16 [i_1] [i_1] [i_1]) ? ((((arr_16 [i_1] [i_4 + 4] [i_4 + 4]) + 82))) : (arr_16 [i_1] [i_1] [i_1])));
            }
            for (int i_5 = 2; i_5 < 10;i_5 += 1)
            {
                var_23 = (max(((max(29963, (arr_13 [i_0 - 2] [i_0 - 1] [i_5 - 2] [i_5 - 1])))), (~var_3)));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        {
                            var_24 = var_7;
                            arr_30 [i_0] [i_1] [i_1] [i_6] [i_1] = (((min((-127 - 1), (arr_25 [i_1])))));
                        }
                    }
                }
                var_25 = (arr_28 [3] [i_5] [4] [i_0] [i_0] [i_0] [i_0 + 2]);
            }
        }
        var_26 |= ((~((((arr_16 [i_0] [1] [i_0]) < (arr_7 [i_0 - 3] [i_0] [i_0 - 2] [6]))))));
        var_27 = 131;
    }
    for (int i_8 = 1; i_8 < 15;i_8 += 1)
    {
        var_28 = ((-(max((((-127 - 1) ^ (arr_31 [i_8 + 3] [i_8 + 3]))), ((max((arr_32 [4]), -16)))))));
        arr_34 [i_8 - 1] [i_8] = (((arr_33 [i_8 + 1] [9]) % ((-(max(var_13, (arr_33 [i_8] [i_8 + 1])))))));
        var_29 = (max((((((arr_31 [i_8] [i_8 + 1]) * var_16)) / (-8 - 1))), var_2));
        var_30 = var_9;
    }
    var_31 = var_13;
    var_32 = (min(var_32, var_0));
    var_33 = var_7;
    var_34 = var_14;
    #pragma endscop
}
