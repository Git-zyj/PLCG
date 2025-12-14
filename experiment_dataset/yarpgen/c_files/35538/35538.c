/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 255;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_21 = (min(var_21, ((max((((((arr_4 [i_0] [i_0] [i_0] [i_0]) < (arr_5 [i_0] [i_1]))) ? 10 : (arr_3 [i_0] [i_2 + 1]))), ((max((arr_4 [i_0] [i_2 - 2] [i_0] [i_1 - 2]), 1))))))));
                    arr_6 [i_0] [i_1] [i_2 - 1] = ((((max((max(5, (arr_0 [i_2]))), 232))) ^ (((arr_4 [i_2 - 2] [i_2 - 2] [i_1 - 1] [5]) ^ 238))));
                }
            }
        }

        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            var_22 = ((((134 ? (arr_5 [i_0] [i_0]) : 11)) < (max((39 * 5), ((max(189, (arr_4 [i_0] [8] [i_3 - 1] [i_3]))))))));
            var_23 = (((((max((arr_8 [i_0] [i_0]), 250)))) != (((arr_3 [i_0] [i_3 - 1]) % (var_6 && 1)))));
            arr_9 [8] |= ((((36 && (arr_4 [i_3 - 1] [i_3] [i_3 + 1] [i_3 + 1]))) ? (arr_2 [i_0]) : (((arr_7 [i_3 - 1]) << ((((max(251, 140))) - 230))))));
            arr_10 [i_0] [i_3] = var_3;
            var_24 ^= (arr_5 [i_3] [i_0]);
        }
        /* vectorizable */
        for (int i_4 = 4; i_4 < 12;i_4 += 1)
        {
            var_25 -= (arr_12 [i_4 - 1] [i_4 + 1] [i_4 - 4]);
            var_26 = (min(var_26, ((((arr_11 [i_0]) * (arr_1 [i_0]))))));
        }
        var_27 = (max(var_15, (((((arr_12 [i_0] [i_0] [i_0]) ? 137 : (arr_12 [i_0] [i_0] [5]))) + var_1))));
    }
    var_28 = (((max(((var_1 ? 142 : var_7)), var_18)) % (((228 <= (255 | 5))))));
    #pragma endscop
}
