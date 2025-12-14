/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_18 *= ((1406596465 ? (((2083673828 ^ (arr_0 [i_0 - 1] [i_0 - 1])))) : var_2));
                arr_4 [i_0] [11] = ((((((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : 9774572819320116908)) == (arr_3 [i_1 - 1]))));
            }
        }
    }
    var_19 = var_1;

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_20 = (max(var_20, ((((((((var_10 ? (arr_6 [i_2] [i_2]) : -2083673834))) || 9774572819320116883)) ? 9774572819320116908 : -var_8)))));
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 23;i_4 += 1)
            {
                {
                    var_21 *= 1;
                    var_22 = 9774572819320116918;
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        var_23 = (min(((13332082516472812868 & (8672171254389434698 || 1586677503))), var_17));
        var_24 = min(1586677503, (arr_0 [i_5 - 1] [i_5 - 1]));
        var_25 = -0;
    }
    for (int i_6 = 3; i_6 < 12;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 11;i_8 += 1)
            {
                {
                    var_26 = ((-1586677504 ? ((1897515594 << (((arr_11 [i_6 - 3] [i_6]) - 30424)))) : (arr_11 [i_6 - 2] [i_6])));
                    var_27 = ((min((max(-2083673829, 28)), ((var_11 / (arr_0 [i_7 - 2] [i_8 - 1]))))) + 80159290);
                }
            }
        }
        var_28 *= (min(511, -6483878472826952193));
    }
    for (int i_9 = 4; i_9 < 16;i_9 += 1)
    {
        var_29 = ((min((arr_10 [i_9] [i_9 - 3] [i_9 - 2] [i_9 - 1]), (arr_5 [i_9]))));
        var_30 = ((!1) || (((~(arr_7 [i_9 - 3])))));
        var_31 = var_0;
    }
    #pragma endscop
}
