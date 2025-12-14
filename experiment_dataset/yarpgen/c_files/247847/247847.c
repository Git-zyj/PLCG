/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((49 && (arr_1 [i_0])));
        var_21 = (max(var_21, ((-((~(arr_0 [2])))))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_22 = (((((arr_5 [i_1]) >> (14865 - 14859))) < ((58 ? (((arr_0 [22]) ? (arr_7 [i_1] [i_1]) : 1)) : ((1 >> (5099040495723937511 - 5099040495723937502)))))));
        var_23 ^= ((((((-7678959554333573561 | (1 % 1))) + 9223372036854775807)) >> (min((arr_2 [i_1] [i_1]), (((-(arr_5 [i_1]))))))));

        /* vectorizable */
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            var_24 = (((6 >= var_5) & ((-1769307286 ? (arr_7 [i_1] [i_2]) : 17070938876022041508))));
            var_25 = ((739078300 & (((arr_8 [i_1] [22]) ? -1694464300785599578 : 9672))));
            var_26 = (min(var_26, (arr_7 [i_2 + 2] [i_1])));
        }
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 20;i_5 += 1)
            {
                {
                    arr_17 [i_3] [i_3] [i_4] [i_5 + 4] = (((((arr_15 [i_3] [i_5 + 2] [i_5]) & (arr_15 [i_3] [i_5 - 1] [i_4]))) > (((((arr_9 [i_3] [i_5 - 1] [4]) > 250))))));
                    var_27 = arr_7 [i_3] [i_4];
                }
            }
        }
        arr_18 [12] &= (max(1, ((!(arr_0 [20])))));
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
    {
        var_28 = (max(var_28, (((~((14243 - (arr_7 [i_6] [i_6]))))))));
        var_29 -= ((((((arr_19 [i_6] [i_6]) ? (((arr_16 [i_6] [15] [i_6] [i_6]) ? 739078308 : (arr_5 [i_6]))) : 1))) || var_18));
        arr_21 [i_6] [i_6] = ((((((((-(arr_0 [8])))) ? 3555888983 : (1 > 18294)))) ? 1754989175 : (((-2915 * 1) & ((max((arr_16 [i_6] [1] [i_6] [i_6]), var_13)))))));
    }
    var_30 -= 5099040495723937493;

    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        arr_26 [i_7] = ((((((max(3341992811, var_14)) ^ (((18446744073709551598 ? 26266 : 1)))))) ? ((max((max(var_6, (arr_19 [15] [i_7]))), ((min(0, 95)))))) : 19901));
        var_31 = (max(((-((-(arr_1 [i_7]))))), var_0));
        var_32 = (0 ? (!18446744073709551596) : 49684);
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            {
                var_33 -= ((1 ? (((~-1904691054) / (((arr_13 [i_8] [i_8]) / (arr_0 [i_8]))))) : ((((arr_27 [i_8] [i_8]) * (arr_10 [i_9]))))));
                arr_31 [i_8] [i_9] &= (((((4 ? 18878 : (arr_29 [i_9])) << (((1 == (arr_0 [i_8]))))))));
            }
        }
    }
    #pragma endscop
}
