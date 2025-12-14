/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (max(var_14, ((~(arr_1 [i_0] [i_0])))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    {

                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            var_19 *= ((+(((arr_13 [i_1] [i_1] [i_1] [i_1 + 1] [i_1] [i_2]) ? (arr_13 [i_0] [i_0] [i_1] [i_1 - 1] [1] [i_1]) : (arr_13 [i_0] [i_0] [i_1 - 3] [i_1 + 1] [0] [i_3 - 2])))));
                            arr_14 [i_0] [i_0] [i_3 - 1] [i_4] = ((-(((arr_12 [i_3] [8] [i_3] [i_3] [i_3 - 2]) & (arr_12 [i_3 + 1] [2] [i_3] [i_3 + 1] [i_3 + 1])))));
                        }
                        var_20 |= ((((max((arr_2 [i_3]), -var_8))) ? var_8 : (max(255, ((248 ? 9315360764762368653 : 9223372036854775803))))));
                        var_21 = ((((((arr_5 [1] [1] [i_3]) ? ((var_11 ? 8 : 9131383308947182959)) : 3187155740))) ? ((min(-8141, ((min(-91, (arr_8 [i_2] [1]))))))) : (arr_1 [i_1] [i_3 - 2])));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_22 = ((-(arr_16 [i_5])));
        arr_19 [i_5] = (9315360764762368666 / 81);
        arr_20 [i_5] = ((0 ? -18545 : var_1));
        var_23 = 62;
    }
    var_24 = min(((min(var_1, (max(1146875526, var_0))))), ((252 ? 9315360764762368653 : 9223372036854775788)));
    var_25 *= var_2;
    #pragma endscop
}
