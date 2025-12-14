/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= ((var_6 ? (((((44529 ? var_10 : 21006))) & 247)) : 254));

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_4 [i_0] &= ((-30761 - ((((((254 ? 54 : 21006))) <= 793951451)))));
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    {
                        var_17 = (var_9 << (var_10 != var_11));
                        arr_12 [i_0] [i_1] [i_2 - 2] [i_3 - 1] = (((arr_2 [i_1] [i_2 - 1]) ? var_3 : var_6));
                        var_18 = (min(var_18, var_12));
                    }
                }
            }
            arr_13 [i_0] [i_1] = 3501015846;
        }
        var_19 = (max(var_19, ((((~35313) ? (3501015844 * 1841377238) : var_1)))));
        arr_14 [i_0] |= (((((((247 ? (arr_2 [i_0] [i_0]) : var_10)) == ((((arr_3 [i_0]) ? var_8 : 54)))))) << ((((((arr_2 [i_0] [i_0]) != var_9))) / ((var_10 ? (arr_1 [i_0]) : (arr_5 [i_0] [i_0] [i_0] [i_0])))))));
        arr_15 [i_0] &= (((((-((var_7 ? 793951452 : 2264547525))))) ? ((~((min(28, var_0))))) : (((!(arr_6 [i_0] [i_0] [i_0]))))));
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
    {
        var_20 = ((((((((arr_17 [i_4]) ? var_14 : var_8))) ? ((-1068451753 ? -116632650 : var_14)) : var_11)) | ((((arr_2 [i_4] [i_4]) ? (arr_2 [i_4] [i_4]) : (arr_2 [i_4] [i_4]))))));
        var_21 *= arr_0 [i_4];
        var_22 = ((+(((arr_2 [1] [i_4]) ? ((var_0 ? var_4 : var_12)) : (((0 ? (arr_7 [i_4] [i_4]) : 626720073)))))));
        var_23 = ((((var_8 && (arr_1 [i_4])))));
    }
    var_24 = (max(var_24, (!20979)));
    #pragma endscop
}
