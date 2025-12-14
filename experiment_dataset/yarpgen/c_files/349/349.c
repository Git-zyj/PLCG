/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = (arr_4 [i_1] [1] [i_0]);
                var_18 ^= -18416;
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        arr_9 [i_2] = (arr_7 [i_2 + 2] [i_2]);
        var_19 = (((arr_1 [i_2 + 2]) ^ ((0 % (arr_6 [i_2] [9] [2])))));
        var_20 -= (arr_3 [i_2] [i_2 + 3] [8]);
        var_21 = (max(var_21, -8855094395244984517));

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                arr_17 [i_2] [1] [i_4] [0] = ((21817 ^ (arr_2 [i_2 + 2])));
                var_22 = (arr_14 [i_2 + 2]);
                var_23 = (arr_13 [i_2] [8]);
                var_24 += var_7;
                arr_18 [i_2] [i_2] [8] [5] = (arr_13 [i_3] [i_3]);
            }
            var_25 = -387204891;
            var_26 = (min(var_26, ((((arr_4 [i_2] [i_2] [i_2]) <= 12592573368736806847)))));
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_27 = ((21814 <= (arr_20 [20])));
        var_28 = (max(var_28, ((((((((arr_19 [i_5] [7]) / (arr_20 [i_5]))))) - (21817 && 1))))));
        arr_21 [i_5] = (var_15 ^ (((arr_20 [i_5]) - (35911 * 12290))));
    }
    var_29 ^= var_1;
    var_30 = var_11;
    #pragma endscop
}
