/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_11 = 175;
                    var_12 ^= ((-970125316 ? 115 : -1936133580));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_13 = (min(var_13, ((((((((var_3 - (arr_5 [i_3] [i_2 + 1] [i_1] [i_0])))) == var_8)) ? ((((!(arr_1 [i_3] [i_3]))) ? ((max((arr_4 [8] [i_3] [i_3] [8]), -970125316))) : (((arr_8 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_3] [i_1 + 3] [i_1 + 3]) ? 78 : (arr_7 [4] [4] [4]))))) : -978545779)))));
                        arr_10 [i_0] [1] [i_0] [i_0] [i_0] [i_0] = ((~(((arr_8 [i_0] [i_0 - 3] [i_0 - 1] [i_0] [i_2 + 3] [i_2 + 3]) ? -21059 : var_9))));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        arr_13 [i_0] [i_2 + 2] [i_2] [i_4] [i_0] = (((!var_6) / var_1));
                        var_14 = ((((((arr_3 [i_2 + 2] [i_0 - 3] [i_1 + 3]) * 780866516))) ? ((var_3 ? (arr_3 [i_2 + 2] [i_0 - 3] [i_1 - 1]) : (arr_3 [i_2 + 1] [i_0 - 3] [i_1 - 1]))) : (((arr_3 [i_2 + 2] [i_0 - 2] [i_1 + 1]) ? (arr_3 [i_2 - 1] [i_0 - 1] [i_1 + 1]) : (arr_3 [i_2 + 3] [i_0 - 2] [i_1 - 1])))));
                        arr_14 [i_1 + 1] [i_1 + 1] [i_0] = (min(1, 780866527));
                        var_15 = (max((arr_7 [i_0] [i_2] [8]), var_6));
                    }
                }
            }
        }
    }
    var_16 += (!var_8);
    #pragma endscop
}
