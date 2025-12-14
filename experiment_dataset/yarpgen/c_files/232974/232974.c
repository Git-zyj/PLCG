/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-(!51328)));
        var_14 = (max(var_14, (((-51345 <= (0 | 196))))));
        var_15 = (max(var_15, (((+(max((arr_0 [i_0]), 511)))))));
    }
    var_16 &= 537;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_17 = var_0;
                            var_18 = (max((arr_10 [i_1] [i_2] [22] [i_1]), (~var_12)));
                            arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (i_1 % 2 == 0) ? ((((((1 | (arr_11 [i_1] [i_4 - 1] [i_4] [i_4] [i_1])))) > ((191826619466109230 >> ((((var_7 << (arr_3 [i_1]))) - 5062678475233557397))))))) : ((((((1 | (arr_11 [i_1] [i_4 - 1] [i_4] [i_4] [i_1])))) > ((191826619466109230 >> ((((var_7 << (((arr_3 [i_1]) - 1)))) - 5062678475233557397)))))));
                            arr_14 [i_1] [9] [i_3] [i_4 - 1] = var_11;
                            var_19 &= (((((arr_10 [i_1] [i_4 - 1] [14] [i_4 - 1]) | (arr_11 [i_1] [i_4 - 1] [i_4 - 1] [i_4] [i_1])))) ? (max((arr_11 [20] [i_4 - 1] [i_3] [i_4 - 1] [14]), (arr_10 [i_1] [i_4 - 1] [0] [i_4 - 1]))) : (((-(arr_11 [i_1] [i_4 - 1] [i_4 - 1] [i_2] [i_2])))));
                        }
                    }
                }
                var_20 = (max(var_20, var_8));
            }
        }
    }
    #pragma endscop
}
