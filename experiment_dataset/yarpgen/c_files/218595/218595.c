/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_14 *= ((((arr_3 [i_0 + 1] [i_0 + 1]) ? (arr_3 [i_0] [i_0 + 3]) : var_12)));
                var_15 = (min((arr_2 [i_0] [0] [i_1 - 1]), ((max((arr_2 [i_0] [2] [i_1 - 2]), (arr_2 [i_0] [i_0] [i_1 + 2]))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 17;i_4 += 1)
            {
                {

                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        var_16 = (max(17310623583155976693, (arr_13 [5] [i_3 + 2] [i_3 - 2])));
                        var_17 = (max(13, ((-7311 ? -7338 : (arr_14 [i_3 - 2] [i_3] [i_4] [i_2])))));
                        var_18 = (((-617547438 * -1) ? ((((((max((arr_6 [i_3] [i_3]), var_2))) != (((!(arr_6 [15] [15])))))))) : (max((max(var_0, (arr_4 [i_2]))), var_4))));
                    }
                    /* vectorizable */
                    for (int i_6 = 3; i_6 < 19;i_6 += 1)
                    {
                        var_19 = (((arr_16 [i_4] [i_4 + 4] [i_4 + 4] [i_3 + 2]) ? var_5 : (arr_5 [i_2] [i_4 + 2])));
                        var_20 &= (((arr_15 [2] [i_4 + 2] [i_4 + 3] [i_4] [i_4 + 4]) ? (arr_15 [i_4 - 1] [i_4] [i_4] [i_4 + 2] [i_4 - 1]) : (arr_15 [i_4 + 3] [12] [0] [12] [i_4 + 2])));
                        var_21 = (-617547438 & 13);
                    }
                    var_22 = ((~((~(arr_8 [i_2] [i_2] [i_4 + 3])))));
                }
            }
        }
    }
    var_23 &= (min((max(((var_11 ? var_10 : 1388748952)), var_5)), var_2));
    var_24 *= (!var_10);
    #pragma endscop
}
