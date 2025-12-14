/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_1 - 1] [i_2] [i_0] = ((~(min(((-16384 ? -789723740 : 12450018647139330937)), (~var_14)))));

                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            arr_16 [i_0] [i_0] = (max(((var_3 ? (((3797324117 ? -36 : -21790))) : (min(-51, var_4)))), var_15));
                            var_16 = (arr_11 [i_0] [i_1 - 3] [9] [16]);
                        }
                        for (int i_5 = 2; i_5 < 18;i_5 += 1)
                        {
                            var_17 = (415034989 ? (max((arr_1 [i_0]), -30382)) : (((35 ? var_3 : 24))));
                            var_18 = (var_11 ? var_8 : (min((((arr_11 [i_2 - 1] [6] [18] [18]) ? var_8 : (arr_18 [i_0 + 3] [i_1 - 4] [i_0 - 2] [15] [i_1 - 4]))), (min((arr_14 [i_5 - 2] [5] [i_0 + 3] [i_0 + 3] [i_0 + 3]), 750344125)))));
                            var_19 = -1179817504;
                        }
                        arr_20 [i_0] [i_0] [i_2] [i_2] [i_0] = (arr_3 [i_0] [i_1 + 2]);
                    }
                }
            }
        }
        var_20 = (arr_19 [i_0] [2] [16] [i_0] [i_0 + 3]);
    }
    var_21 = var_9;
    var_22 = var_8;
    #pragma endscop
}
