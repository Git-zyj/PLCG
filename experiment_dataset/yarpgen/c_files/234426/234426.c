/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [0] [i_0] [i_0] [i_0] [i_0] = (((var_3 && (((arr_6 [0] [i_1]) && 51576)))) || (((((arr_1 [i_0]) || (arr_7 [i_0] [i_1] [i_2] [i_3] [i_3] [i_1]))) || (var_14 && 13960))));
                        arr_10 [i_0] [i_0] [i_2 + 1] = ((var_9 | 13944) & (var_2 & 9314));
                        var_16 &= (((var_12 & -1773861262) & (var_8 | var_3)));
                        var_17 *= (((var_9 ^ var_5) >> (((((((arr_0 [16]) + 2147483647)) << (37751 - 37751))) - 794265202))));
                        var_18 = ((((1 + 91) / (((arr_1 [i_0]) + (arr_6 [i_1] [i_2 + 2]))))) * (var_15 + var_9));
                    }
                }
            }
        }
        var_19 = ((((25450 << (-1988688342 + 1988688347))) << (((var_3 | 1) - 1484208076))));
    }
    for (int i_4 = 1; i_4 < 21;i_4 += 1)
    {
        var_20 = ((((567153798 + (arr_11 [i_4 - 1]))) + (((arr_12 [i_4 + 1] [i_4]) / (arr_12 [i_4 + 1] [i_4])))));
        arr_13 [i_4] = ((1773861262 == var_11) <= (var_1 <= 0));
        var_21 = ((((((65532 / 51550) + (-891795064 * 0)))) - (var_6 / var_10)));
        var_22 = (((((-2 | var_11) + 2147483647)) >> ((((625581104 >> (((arr_11 [i_4 - 1]) - 49203)))) - 38170))));
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_23 = (((var_7 || var_15) || ((768750788 && (arr_16 [i_5])))));
        var_24 = ((((((arr_15 [i_5] [i_5]) / var_5)) - var_12)) * (((arr_14 [i_5]) / 65533)));
    }
    var_25 = var_14;
    var_26 = var_1;
    #pragma endscop
}
