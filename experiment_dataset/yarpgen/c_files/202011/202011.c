/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_11 = (min(var_11, ((min((((((-6 ? 1 : 0))) ? ((min(1, 0))) : 1)), ((((255 ? 65529 : var_0)))))))));
                    var_12 = var_4;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    arr_11 [i_0] [i_0] [i_1] [i_3] = ((var_1 ? (arr_10 [i_1]) : var_8));
                    var_13 &= (((arr_3 [i_3] [i_0]) ? (arr_3 [i_0] [i_1]) : (arr_3 [i_0] [i_3])));
                    arr_12 [i_0] [i_1] [i_3] [i_1] = (((var_9 ? var_10 : (arr_4 [i_1]))));
                    arr_13 [i_1] [i_1] = (((arr_2 [i_0]) ? var_10 : var_9));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_14 = var_2;
                                var_15 = (arr_9 [16]);
                            }
                        }
                    }
                    var_16 = (arr_6 [i_4] [24] [2]);
                }
                arr_20 [13] [i_1] [i_0] = (((min((max((arr_16 [17] [6]), (arr_7 [i_0] [i_1]))), var_3)) + 0));
            }
        }
    }

    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        var_17 = var_5;
        var_18 &= (((arr_5 [i_7] [i_7] [3]) ? (((min((arr_16 [i_7] [i_7]), var_8)))) : (min((arr_3 [i_7] [i_7]), (arr_7 [i_7] [i_7])))));
        var_19 = 11290180048813424373;
        arr_24 [i_7] = (((var_10 ? (arr_21 [i_7]) : var_9)));
        var_20 = var_9;
    }
    #pragma endscop
}
