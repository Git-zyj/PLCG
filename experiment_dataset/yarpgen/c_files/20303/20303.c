/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((min(-9223372036854775805, var_9)));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 = (((((((((arr_2 [i_0] [15]) ? var_9 : var_5))) ? -9223372036854775805 : (arr_0 [i_0])))) ? ((((max(40, (arr_2 [i_0] [i_0])))) ? (arr_2 [16] [i_0]) : var_6)) : (((((81 ? 2147483647 : (arr_0 [i_0])))) ? (max(-2147483647, (arr_1 [4] [i_0]))) : (min(8191, -725758379))))));
        var_13 ^= min(((((arr_0 [19]) ^ ((var_9 ? var_6 : (arr_1 [4] [i_0])))))), (max((max(var_8, var_5)), (arr_2 [11] [i_0]))));
    }
    for (int i_1 = 4; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_14 = (max(var_14, (((((max((arr_4 [i_1] [i_2]), var_6))) ? (max((arr_1 [i_1 - 2] [i_1 + 1]), (-2001208068 / 1236039215609621304))) : (((min(var_8, (((1 || (arr_5 [6] [i_2] [0])))))))))))));
            arr_7 [i_1] [i_2] = var_2;
            var_15 = ((((((~(arr_4 [5] [6])))) ? (min(2147483647, var_9)) : 2147483647)));
        }
        arr_8 [0] = (arr_0 [10]);

        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_16 = (((max(var_4, (~8191))) | (-2147483647 - 1)));
            var_17 = (max(var_17, ((max((((((0 ? var_5 : (arr_5 [i_1] [i_3] [i_3]))) ^ 245591267))), (max(var_5, (max(-9223372036854775795, 170)))))))));
        }

        /* vectorizable */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_18 = (((var_2 - -725758377) | 24));
            var_19 = (((arr_12 [i_1 + 1] [i_4]) | (arr_4 [i_1 + 1] [18])));
        }

        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_20 = (((((arr_6 [i_1]) ? var_3 : var_6)) / ((~(max(-36, -179017091))))));
            var_21 = ((!(arr_1 [16] [i_5])));
            var_22 = (max(var_22, ((min(((max(-8191, (!var_0)))), ((((((arr_3 [i_1] [13]) ^ 9223372036854775786))) ? ((9223372036854775802 + (arr_11 [19]))) : var_0)))))));
        }
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            var_23 -= (max(((~(arr_16 [i_1 - 2]))), (arr_4 [5] [14])));
            var_24 = ((!(~var_2)));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    {
                        arr_23 [i_7] = (((((~(arr_4 [14] [i_7])))) ^ ((~(arr_16 [i_1 - 1])))));
                        var_25 = (max(34, ((-((8162 + (arr_18 [i_1] [1] [i_7] [7])))))));
                    }
                }
            }
        }
    }
    var_26 ^= (max(35, (511 > var_8)));
    #pragma endscop
}
