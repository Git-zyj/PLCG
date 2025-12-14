/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                var_17 |= (((((var_11 || (arr_4 [i_0 + 2] [i_1])))) != ((~(arr_4 [i_1] [i_1])))));
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        {
                            arr_12 [i_0 - 1] [i_4] [i_2] [i_3] [i_4 + 1] [i_0 - 2] [i_0] = (arr_4 [i_0 - 2] [i_0]);
                            var_18 = var_13;
                            arr_13 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4 - 1] = ((!((((3227238874 && var_0) ? var_13 : (min(1, (arr_2 [i_0] [11]))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        {
                            arr_19 [1] [i_1] [i_0] = (((6243762703160860852 ? (arr_18 [i_0 + 2] [i_0 + 2] [i_2] [i_0] [i_6] [i_1] [i_0]) : (arr_18 [i_0 - 2] [i_1] [i_1] [i_0] [i_6] [i_0] [i_1]))));
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((-((((((arr_18 [i_6] [i_1] [i_2] [i_0] [i_6] [i_1] [i_6]) ? var_0 : var_12)) > (!var_7))))));
                            arr_21 [i_0] [i_1] [i_1] [i_5] [10] |= arr_1 [i_0] [i_0];
                        }
                    }
                }
            }
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                arr_24 [i_0] = ((-8 <= (arr_5 [i_0] [i_1] [i_1])));
                arr_25 [i_0] [i_0] [i_7] [i_7] = 130944;
                arr_26 [i_0] [i_0] [i_0] [i_7] = ((var_15 || (arr_18 [i_0] [i_0] [i_7] [i_0] [i_0] [i_7] [i_7])));
            }
            for (int i_8 = 3; i_8 < 13;i_8 += 1)
            {
                var_19 = ((-1 ? (+-1831549211) : (((arr_3 [i_0] [i_0] [i_8]) % ((min(var_2, 2)))))));
                var_20 = ((1831549220 | (((16806 || (arr_16 [i_0 + 2] [i_0 + 2] [i_8] [i_0 + 2] [i_0] [i_8 + 1] [i_8 + 1]))))));
                arr_29 [i_0] [i_0] = -4257887887;
                var_21 = (((((!((1 != (arr_7 [i_0 - 1])))))) + (min(var_7, (!1473331706)))));
                arr_30 [i_1] [i_0] [i_0] = max(-8, 8456445251809989188);
            }
            arr_31 [i_0] = (2457629681 ^ var_13);
        }
        for (int i_9 = 2; i_9 < 11;i_9 += 1)
        {
            arr_35 [i_0] [i_9] [i_0] = ((((-126 % var_9) + ((var_11 ? var_9 : 652856929)))) | (~var_13));
            arr_36 [i_0] [i_0] [i_0] = var_0;
            arr_37 [i_0] = ((((min((1843083372 != -121), 15))) ? -827429427 : -757057441423345894));
        }
        var_22 = (max(var_3, ((var_2 ? (arr_7 [i_0 - 2]) : 26948))));
        var_23 = (max(((-(!16746))), ((-122 ? (~var_3) : var_12))));
    }
    var_24 = ((((min((!var_10), (var_6 / var_4)))) ? 3125228906 : var_16));
    #pragma endscop
}
