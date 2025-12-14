/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_5 ? (var_14 || var_11) : (var_7 <= var_15)));
    var_17 = (min(var_17, (((((((min(4026531840, 3488473739)) << (var_12 + 9017996449803339249)))) && var_9)))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_18 = (((((39953 ? var_1 : var_12))) ? ((~(arr_1 [i_0]))) : -var_11));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 16;i_3 += 1)
                {
                    {
                        var_19 = (min(var_19, var_1));
                        arr_14 [i_0] = ((-(((arr_5 [1] [i_0]) + 39967))));
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            arr_17 [i_0] [i_0] = (!250);
            var_20 = (min(var_20, ((max(((var_5 << (4545 - 4528))), (((((~(arr_15 [i_4]))) > 224))))))));
        }

        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            arr_20 [i_0] = (arr_7 [i_0]);
            arr_21 [i_0] [0] = (((19 | (arr_6 [i_0 + 1] [i_0] [5]))));
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        arr_24 [i_6] = ((170601242 < (arr_0 [1])));
        var_21 = (min(var_21, (((arr_15 [i_6]) ? 1 : (arr_15 [i_6])))));
    }
    #pragma endscop
}
