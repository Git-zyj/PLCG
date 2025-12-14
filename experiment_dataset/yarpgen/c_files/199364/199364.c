/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = min(var_8, (((min(var_4, var_9)) ^ (~0))));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_11 = var_2;
        var_12 = arr_0 [i_0];
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_3] |= (((((((min((arr_0 [i_3]), var_7)) <= var_5)))) <= ((1850799954 ? 4294967295 : 1850799940))));
                        var_13 = (!-1032294085);
                        arr_12 [i_0 + 2] [i_1] [i_2] [i_3] [i_3] [i_2] = var_5;
                        var_14 = (arr_0 [i_3]);
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        arr_16 [i_4] &= ((((~(arr_4 [i_4] [i_4] [i_4]))) >= ((~((var_3 ? var_8 : var_9))))));
        var_15 = (~(((var_0 < (arr_13 [i_4] [i_4])))));
        var_16 = (!var_8);
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 17;i_5 += 1)
    {
        arr_19 [i_5] = (((arr_5 [i_5] [i_5] [i_5 - 2] [i_5 - 2]) + (arr_5 [i_5] [i_5] [i_5 + 1] [i_5 - 2])));
        var_17 = ((~(15 && -1)));

        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            var_18 &= 1850799966;
            arr_24 [i_5] [i_5] [i_6] = (((((var_6 | (arr_1 [i_5])))) ? ((-122 ? 33898808 : 4294967289)) : 1850799990));
            var_19 *= ((((var_3 ? 2121924128 : var_5))) ? (!-120) : (((arr_1 [i_5]) ^ 1446482209)));
        }
        var_20 = (((arr_1 [i_5 - 3]) ? (arr_9 [i_5 - 3] [i_5] [i_5] [i_5 - 3]) : var_7));
    }
    #pragma endscop
}
