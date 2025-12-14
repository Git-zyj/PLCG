/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= ((var_3 | (((((min(63, 1))) || var_5)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 -= (-(arr_1 [i_0] [i_0]));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
        {
            var_18 *= -539200565;
            var_19 ^= ((-(arr_2 [0])));
            var_20 &= (((var_0 | -866992631311798086) ? (arr_0 [i_1]) : var_10));
            var_21 ^= (((var_14 > 357352617) ? (arr_2 [1]) : (((arr_3 [i_0] [i_1]) + 1))));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
        {
            var_22 = (min(var_22, 2147483647));
            var_23 &= ((((((~4358) ^ (127 | var_4)))) ? 187 : (min(-93, 3982))));
            var_24 += ((((4294967295 == (~114))) ? var_2 : -var_4));
            var_25 += ((+(min((arr_4 [i_2] [i_0] [i_2]), -var_4))));
        }
        var_26 |= ((~(arr_1 [6] [13])));
        var_27 ^= (((1 ? (-2147483647 - 1) : (~var_8))));
    }
    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        var_28 += ((((min(((1 ? 137 : 2147483647)), (!var_12)))) || (((arr_8 [i_3]) && (arr_8 [i_3 - 1])))));
        var_29 |= ((((-(arr_4 [i_3] [i_3 - 1] [i_3 - 1]))) > ((-(arr_4 [i_3] [i_3] [i_3])))));
        var_30 &= (((!3525305676580037653) ? ((((1 & 1) > (arr_6 [i_3 - 1])))) : ((~((~(arr_1 [i_3] [i_3])))))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_31 = (max(var_31, ((min((((1 / (arr_13 [i_4])))), ((((((arr_12 [14]) ? var_3 : 100))) ? (arr_11 [i_4]) : (arr_13 [i_4]))))))));
        var_32 ^= (((((arr_13 [i_4]) ? (arr_13 [i_4]) : 4)) > (((arr_13 [i_4]) >> (((arr_13 [i_4]) - 35467))))));
    }
    for (int i_5 = 2; i_5 < 15;i_5 += 1)
    {
        arr_16 [i_5] |= (~18);
        var_33 = (max(var_33, ((((arr_10 [i_5 - 1]) ? (((((arr_10 [i_5 - 1]) < (arr_10 [i_5 - 1]))))) : ((var_6 ? (arr_10 [i_5 - 1]) : var_13)))))));
        var_34 ^= ((-((127 ? 47 : 357352617))));
        var_35 &= -1849065911;
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                {
                    var_36 |= (((((!((min(58, 1)))))) != 198));
                    var_37 |= ((var_10 * 0) * ((((arr_17 [i_6 + 1] [i_6 + 1] [i_5 - 1]) < (arr_17 [i_6 - 3] [i_6 + 1] [i_5 + 1])))));
                }
            }
        }
    }
    #pragma endscop
}
