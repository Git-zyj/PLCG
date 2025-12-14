/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((~((var_0 >> (-4824643626043316406 + 4824643626043316431))))) | var_11));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 ^= (min(4294967294, 160));
        arr_3 [i_0] = ((3423926043595625615 ? (((arr_1 [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_1 [i_0]))) : (arr_2 [i_0] [i_0])));
        arr_4 [i_0] [i_0] = (((arr_2 [i_0] [i_0]) ? 8890 : ((min((arr_0 [i_0]), (arr_0 [i_0]))))));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_17 = ((((((16 ? 4489519648871396605 : -25)) ? (var_3 & 0) : (arr_8 [i_1] [i_1 + 1])))));

        for (int i_2 = 4; i_2 < 22;i_2 += 1) /* same iter space */
        {
            var_18 = 960;
            var_19 = ((~(((-1081294808 != ((~(arr_5 [i_1] [i_1]))))))));
            var_20 = var_8;
            var_21 -= (((arr_8 [2] [2]) ? 1 : var_13));
        }
        for (int i_3 = 4; i_3 < 22;i_3 += 1) /* same iter space */
        {
            arr_13 [i_1] = ((-118 % (min(8247721909054694911, -41))));
            var_22 = (~(max(var_8, (arr_12 [1] [i_1]))));
            var_23 = 2141924194;
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    {
                        var_24 = 1;
                        var_25 = (arr_11 [i_3]);
                        var_26 &= min((((!(arr_7 [i_1 + 3])))), (min((arr_7 [i_1 + 2]), (arr_12 [i_1 + 1] [i_5]))));
                        arr_20 [i_3] [i_1] = (max(var_8, -9223372036854775807));
                    }
                }
            }
            var_27 |= (min(((13 ? (arr_12 [i_1 + 1] [24]) : (arr_12 [i_1 + 2] [1]))), 28559));
        }
    }
    for (int i_6 = 1; i_6 < 17;i_6 += 1)
    {
        var_28 = (arr_10 [i_6 + 1] [i_6]);
        arr_25 [i_6] = ((22 ? (((arr_19 [0] [i_6 + 4] [0] [24] [i_6 + 4] [i_6 + 2]) ? -1 : ((2097151 ? 10922940896019818435 : (arr_19 [i_6] [i_6] [i_6] [i_6 - 1] [2] [2]))))) : ((min((arr_15 [4] [i_6] [i_6 + 3]), (arr_17 [i_6 + 3] [i_6] [i_6] [22]))))));
    }
    var_29 = var_7;
    #pragma endscop
}
